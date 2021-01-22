{-# LANGUAGE NamedFieldPuns #-}
module Arl.Eval where

import Control.Monad.Reader
import Control.Monad.Except
import Control.Monad.Identity
import Control.Monad.State
import Data.List
import qualified Data.Map as M
import Arl.Ast
import Arl.RIL
import Arl.Utils
import Arl.RilState

type Env = (String, M.Map String [ID])

baseEnv = ("A", M.empty)
-- type Fenv = M.Map ID [Rule]
type Prog' = (Main, [Func])

-- ------------------------PREPROCESSING -----------------------
multiMain :: Prog -> Either String Prog'
multiMain (mains, funcs) = if length mains > 1 then
                             Left "multiple main functions declared"
                          else
                            Right (head mains, funcs)

rmUnused :: Prog' -> Prog'
rmUnused (main, funcs) = (main, filter (\x -> ident x `elem` map ident main) funcs)

-- --------------------- MONAD AND EVAL --------------------------------

-- type Eval a = ReaderT Env (ExceptT String (StateT Integer Identity)) a

-- runEval :: Env -> Integer -> Eval a -> (Either String a, Integer)
-- runEval env st e = runIdentity (runStateT (runExceptT (runReaderT e env)) st)

-- envU (v,m) = (v,m)
-- stdEnv = ("A", M.empty :: M.Map String [ID])

type Eval a = ReaderT Env (StateT RilState Identity) a

runEval env st ev = runIdentity $ runStateT (runReaderT ev env) st

evalProg :: Prog' -> Eval String
evalProg (main, funcs) =
  do main' <- mapM evalFCall main
     funcs' <- mapM evalFun funcs
     return $ newlines
       [ mainSetup
       , "\n"
       , newlines main'
       , "\n"
       , freeNodes
       , "\n"
       , initialize
       , "\n"
       , build
       , "\n"
       , newlines funcs'
       , copy
       , cons
       ]

evalFCall :: FC -> Eval String
evalFCall (FCall id) = return $ fCall id
evalFCall (FUncall id) = return $ fUncall id

evalFun :: Func -> Eval String
evalFun (Func id rules) =
  do st <- setFname id
     rules' <- mapM evalRules rules
     st' <- get
     resetSt
     return $ newlines
            [ "begin " ++ id
            , "skip"
            , "--> " ++ fnameS st ++ "_entry_" ++ rLabel st
            , fnameS st ++ "_exit_" ++ rLabel st ++ " <--"
            , "skip"
            , "end " ++ id
            , "\n"
            ] ++ newlines rules' ++
            newlines
            [ fnameS st ++ "_entry_" ++ rLabel st' ++ " <--"
            , "assert A != A"
            , "--> " ++ fnameS st ++ "_exit_" ++ rLabel st'
            ]

evalRules :: Rule -> Eval String
evalRules r@Rule{args, body, output} =
  do st <- get
     putVars output
     res' <- local (const ("A", M.empty)) $ evalInvPattern output
     putVars args
     inp' <- local (const ("A", M.empty)) $ evalPattern args
     defs' <- local (const ("A", getLiveVars r)) $ mapM evalDef body
     ruleTick
     return $ newlines
            [ fnameS st ++ "_entry_" ++ rLabel st ++ " <--"
            , "// input of rule" ++ rLabel st
            , inp'
            , "A != 0 --> " ++ fnameS st ++ "_entry_" ++ show (ruleNo st + 1) ++ ";"
            , "\n//def starts here\n"
            , newlines defs'
            , fnameS st ++ "_exit_" ++ show (ruleNo st + 1) ++ " <-- A != 0;"
            , "\n // res starts here\n"
            , res'
            , "skip"
            , "--> " ++ fnameS st ++ "_exit_" ++ rLabel st
            , "\n"
            ]

evalPattern :: Pattern -> Eval String
evalPattern (Var x) =
  do (v,_) <- ask
     st <- innerTick
     rmVar x
     case M.lookup x (pVars st) of
       Just _ -> return $ x ++ " <-> " ++ v ++ ";"
       Nothing -> return $ newlines
                    [ vNeqxJ v x (label st)
                    , x ++ " <-> copyP;"
                    , v ++ " <-> copyQ;"
                    , "uncall copy;"
                    , x ++ " <-> copyP;"
                    , vNeq0E (label st) v
                    ]
evalPattern NilNil =
  do (v,_) <- ask
     st <- innerTick
     return $ newlines
        [ v ++ " != nilnil --> " ++ label st ++ ";"
        , v ++ " -= nilnil;"
        , label st ++ " <-- " ++ v ++ " != 0;"
        ]
evalPattern (Const c) =
  do (v,_) <- ask
     st <- innerTick
     return $ newlines
        [ vNeqxJ v (show rval) (label st)
        , v ++ " -= " ++ show rval ++ ";"
        , vNeq0E (label st) v
        ]
  where rval = if c == 2 then c else c*2+1
evalPattern p@(Pair car cdr) =
  do (v,_) <- ask
     putVars p
     st1 <- innerTick
     st2 <- innerTick
     st3 <- innerTick
     let t1 = "t" ++ show (labNo st1) ++ unique p
     let t2 = "t" ++ show (labNo st2) ++ unique p
     car' <- local (const (t1, M.empty)) $ evalPattern car
     cdr' <- local (const (t2, M.empty)) $ evalPattern cdr
     putVars car
     carInv' <- local (const (t1, M.empty)) $ evalInvPattern car
     return $ newlines
        [ "\n//Patterns starts here"
        , isPointerJ v (label st1)
        , v ++ " <-> consP;"
        , "uncall cons;"
        , t1 ++ " <-> consA;"
        , t2 ++ " <-> consD;"
        , car'
        , vNeq0J t1 (label st2)
        , cdr'
        , vEq0J t2 (label st3)
        , vNeq0E (label st2) t1
        , carInv'
        , t1 ++ " <-> consA;"
        , t2 ++ " <-> consD;"
        , "call cons;"
        , v ++ " <-> consP;"
        , vEq0E (label st3) v
        , isPointerE (label st1) v
        ]
evalPattern (Neq id pat) =
  do (v, _) <- ask
     pat1 <- local (const ("A", M.empty)) $ evalPattern pat
     pat2 <- local (const ("A", M.empty)) $ evalInvPattern pat
     return $ newlines
        [ assert0 id
        , pat1
        , plus id v
        , pat2
        , sub v id
        ]
evalPattern (As id pat) = undefined

evalInvPattern :: Pattern -> Eval String
evalInvPattern (Var x) =
  do (v, _) <- ask
     st <- innerTick
     rmVar x
     case M.lookup x (pVars st) of
       Just _ -> return $ x ++ " <-> " ++ v ++ ";"
       Nothing -> return $ newlines
                    [ vNeq0E (label st) v
                    , x ++ " <-> copyP;"
                    , "call copy;"
                    , x ++ " <-> copyP;"
                    , v ++ " <-> copyQ;"
                    , vNeq0J v (label st)
                    ]
evalInvPattern NilNil =
  do (v,_) <- ask
     st <- innerTick
     return $ newlines
        [ vNeq0E (label st) v
        , v ++ " += nilnil;"
        , vNeq0J v (label st)
        ]
evalInvPattern (Const c) =
  do (v,_) <- ask
     st <- innerTick
     return $ newlines
        [ vNeq0J v (invP ++ label st)
        , v ++ " += " ++ show rval ++ ";"
        , vNeqxE (invP ++ label st) v (show rval)
        ]
  where invP = "inv_" ++ show (2*c+1)
        rval = if c == 2 then c else 2*c+1
evalInvPattern p@(Pair car cdr) =
  do (v, _) <- ask
     putVars p
     st1 <- innerTick
     st2 <- innerTick
     st3 <- innerTick
     let t1 = "inv_t" ++ label st1 ++ unique p
     let t2 = "inv_t" ++ label st2 ++ unique p
     car' <- local (const (t1, M.empty)) $ evalPattern car
     putVars p
     carInv' <- local (const (t1, M.empty)) $ evalInvPattern car
     cdrInv' <- local (const (t2, M.empty)) $ evalInvPattern cdr
     return $ newlines
        [ isPointerJ v (invP ++ label st1)
        , vEq0J v (invP ++ label st3)
        , "A <-> consP;"
        , "uncall cons;"
        , t1 ++ " <-> consA;"
        , t2 ++ " <-> consD;"
        , car'
        , vNeq0J t1 (invP ++ label st2)
        , vEq0E (invP ++ label st3) t2
        , cdrInv'
        , vNeq0E (invP ++ label st2) t1
        , carInv'
        , t1 ++ " <-> consA;"
        , t2 ++ " <-> consD;"
        , "call cons;"
        , v ++ " <-> consP;"
        , isPointerE (invP ++ label st1) v
        ]
  where invP = "inv_" ++ unique p
evalInvPattern (Neq id pat) =
  do (v, _) <- ask
     pat1 <- local (const ("A", M.empty)) $ evalPattern pat
     pat2 <- local (const ("A", M.empty)) $ evalInvPattern pat
     return $ newlines
        [ plus v id
        , pat2
        , sub id v
        , pat1
        , assert0 id
        ]
evalInvPattern (As id pat) = undefined

evalDef def =
  do (v, env) <- ask
     putVars $ res def
     putVars $ input def
     innerTick
     st <- get
     innerTick
     st2 <- get
     arg' <- local (const ("A", M.empty)) $ evalInvPattern (input def)
     l' <- local (const ("A", M.empty)) $ evalPattern (res def)
     let live = case M.lookup (unique def) env of
                  Nothing -> undefined --throwError "live variables for def " ++ show d ++ "not defined"
                  Just live' -> live'
     push <- mapM pushLiveVar live
     pop <- mapM popLiveVar live
     let call c = return $ newlines
                     [ arg', ""]
                     ++ newlines push ++ newlines
                     ["", c ++ " " ++ fname def ++ ";", ""]                                    ---- how much should be in here?
                     ++ newlines pop ++ newlines
                     [ "", l'
                     , "assert A == 0;"
                     ]
     let loop c = return $ newlines
                     [ unique def ++ label st ++ " <-- A != 0;"
                     , arg'
                     , l'
                     , "A == 0 --> " ++ unique def ++ label st2 ++ ";"
                     ] ++ newlines push ++ newlines
                     [ c ++ " " ++ fname def
                     ] ++ newlines pop ++ newlines
                     [ "--> " ++ unique def ++ label st
                     , unique def ++ label st2 ++ " <--"
                     , "assert A == 0;"
                     ]
     case def of
       Call{} -> call "call"
       Uncall{} -> call "uncall"
       Loop{} -> loop "call"
       Unloop{} -> loop "uncall"

pushLiveVar :: ID -> Eval String
pushLiveVar id =
  do return $ newlines
        [ id ++ " <-> M[stackP];"
        , "stackP += 4;"
        ]
popLiveVar :: ID -> Eval String
popLiveVar id =
  do return $ newlines
        [ "stackP -= 4;"
        , id ++ " <-> M[stackP];"
        ]

-- -------------------- FUNCTIONS AND VARS -------------------------------"

-- checkNotDup :: (Eq a) => [a] -> Bool
-- checkNotDup [] = True
-- checkNotDup [x] = True
-- checkNotDup (x:xs) =
--   (x `notElem` xs) && checkNotDup xs

-- newVar :: ID -> Value -> Env
-- newVar i v = M.singleton i v

-- -- mkFE :: A.Prog -> Either String Fenv
-- -- mkFE = foldM ins M.empty
-- --   where ins env f = case M.notMember (ident f) env of
-- --                       True -> case checkNotDup (ident f) of
-- --                                 True -> Right $ M.insert (ident f) (rules f) env
-- --                                 False -> Left $ "Error in making FE"
-- --                       False -> Left "Function is already in FE"



-- runProg :: String -> A.Prog -> IO()
-- runProg _ funcs =
--   case mkFE funcs of
--     Left l -> print l
--     Right env -> print $ M.toList env

-- evalDef :: Def -> Eval String
-- evalDef d@Call {res, fname, input} =
--   do env <- ask
--      putVars res
--      putVars input
--      arg' <- evalInvPattern input "A"
--      l' <- evalPattern res "A"
--      let live = case M.lookup (unique d) env of
--                   Nothing -> undefined --throwError "live variables for def " ++ show d ++ "not defined"
--                   Just live' -> live'
--      push <- mapM pushLiveVar live
--      pop <- mapM popLiveVar live
--      return $ newlines
--         [ arg', ""]
--         ++ newlines push ++ newlines
--         ["", "call " ++ fname ++ ";", ""]                                    ---- how much should be in here?
--         ++ newlines pop ++ newlines
--         [ "", l'
--         , "assert A == 0;"
--         ]
-- evalDef d@Uncall{res, fname, input} =
--   do env <- ask
--      putVars res
--      putVars input
--      arg' <- evalInvPattern input "A"
--      l' <- evalPattern res "A"
--      let live = case M.lookup (unique d) env of
--                   Nothing -> undefined --throwError "live variables for def " ++ show d ++ "not defined"
--                   Just live' -> live'
--      push <- mapM pushLiveVar live
--      pop <- mapM popLiveVar live
--      return $ newlines
--         [ arg', ""]
--         ++ newlines push ++ newlines
--         ["", "uncall " ++ fname ++ ";", ""]                                    ---- how much should be in here?
--         ++ newlines pop ++ newlines
--         [ "", l'
--         , "assert A == 0;"
--         ]
-- evalDef d@Loop {res, fname, input} =
--   do env <- ask
--      putVars res
--      putVars input
--      innerTick
--      st <- get
--      innerTick
--      st2 <- get
--      arg' <- evalInvPattern input "A"
--      l' <- evalPattern res "A"
--      let live = case M.lookup (unique d) env of
--                   Nothing -> undefined --throwError "live variables for def " ++ show d ++ "not defined"
--                   Just live' -> live'
--      push <- mapM pushLiveVar live
--      pop <- mapM popLiveVar live
--      return $ newlines
--         [ unique d ++ label st ++ " <-- A != 0;"
--         , arg'
--         , l'
--         , "A == 0 --> " ++ unique d ++ label st2 ++ ";"
--         ] ++ newlines push ++ newlines
--         [ "call " ++ fname
--         ] ++ newlines pop ++ newlines
--         [ "--> " ++ unique d ++ label st
--         , unique d ++ label st2 ++ " <--"
--         , "assert A == 0;"
--         ]
-- evalDef d@Unloop{res, fname, input} =
--   do env <- ask
--      putVars res
--      putVars input
--      innerTick
--      st <- get
--      innerTick
--      st2 <- get
--      arg' <- evalInvPattern input "A"
--      l' <- evalPattern res "A"
--      let live = case M.lookup (unique d) env of
--                   Nothing -> undefined --throwError "live variables for def " ++ show d ++ "not defined"
--                   Just live' -> live'
--      push <- mapM pushLiveVar live
--      pop <- mapM popLiveVar live
--      return $ newlines
--         [ unique d ++ label st ++ " <-- A != 0;"
--         , arg'
--         , l'
--         , "A == 0 --> " ++ unique d ++ label st2 ++ ";"
--         ] ++ newlines push ++ newlines
--         [ "call " ++ fname
--         ] ++ newlines pop ++ newlines
--         [ "--> " ++ unique d ++ label st
--         , unique d ++ label st2 ++ " <--"
--         , "assert A == 0;"
--         ]
