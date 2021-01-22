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

type Env = M.Map String [ID]
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
     res' <- evalInvPattern output "A"
     putVars args
     inp' <- evalPattern args "A"
     defs' <- local (const (getLiveVars r)) $ mapM evalDef body
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

evalPattern :: Pattern -> String -> Eval String
evalPattern (Var x) v =
  do st <- innerTick
     rmVar x
     case M.lookup x (pVars st) of
       Just _ -> return $ x ++ " <-> " ++ v ++ ";"
       Nothing -> return $ newlines
                    [ v ++ " != " ++ x ++ " --> " ++ label st ++ ";"
                    , x ++ " <-> copyP;"
                    , "call copy;"
                    , x ++ " <-> copyP;"
                    , v ++ " <-> copyQ;"
                    , label st ++ " <-- " ++ v ++ " != 0;"
                    ]
evalPattern NilNil v =
  do st <- innerTick
     return $ newlines
        [ v ++ " != nilnil --> " ++ label st ++ ";"
        , v ++ " -= nilnil;"
        , label st ++ " <-- " ++ v ++ " != 0;"
        ]
evalPattern (Const c) v =
  do st <- innerTick
     return $ newlines
        [ v ++ " != " ++ show rval ++ " --> " ++ label st ++ ";"
        , v ++ " -= " ++ show rval ++ ";"
        , label st ++ " <-- " ++ v ++ " != 0;"
        ]
  where rval = if c == 2 then c else c*2+1
evalPattern p@(Pair car cdr) v =
  do putVars p
     st1 <- innerTick
     st2 <- innerTick
     st3 <- innerTick
     let t1 = "t" ++ show (labNo st1) ++ unique p
     let t2 = "t" ++ show (labNo st2) ++ unique p
     car' <- evalPattern car t1
     cdr' <- evalPattern cdr t2
     putVars car
     carInv' <- evalInvPattern car t1
     return $ newlines
        [ "\n//Patterns starts here"
        , v ++ " & 3 --> " ++ label st1 ++ ";"
        , v ++ " <-> consP;"
        , "uncall cons;"
        , t1 ++ " <-> consA;"
        , t2 ++ " <-> consD;"
        , car'
        , t1 ++ " != 0 -->" ++ label st2 ++ ";"
        , cdr'
        , t2 ++ " == 0 -->" ++ label st3 ++ ";"
        , label st2 ++ " <-- " ++ t1 ++ " != 0;"
        , carInv'
        , t1 ++ " <-> consA;"
        , t2 ++ " <-> consD;"
        , "call cons;"
        , v ++ " <-> consP;"
        , label st3 ++ " <-- " ++ v ++ " == 0;"
        , label st1 ++ " <-- " ++ v ++ " & 3;"
        ]
evalPattern (Neq id pat) _ = undefined
evalPattern (As id pat) _ = undefined

evalInvPattern :: Pattern -> String -> Eval String
evalInvPattern (Var x) v =
  do st <- innerTick
     rmVar x
     case M.lookup x (pVars st) of
       Just _ -> return $ x ++ " <-> " ++ v ++ ";"
       Nothing -> return $ newlines
                    [ label st ++ " <-- " ++ v ++ " != 0;"
                    , v ++ " <-> copyQ;"
                    , x ++ " <-> copyP;"
                    , "uncall copy;"
                    , x ++ " <-> copyP;"
                    , v ++ " != " ++ x ++ " --> " ++ label st ++ ";"
                    ]
evalInvPattern NilNil v =
  do st <- innerTick
     return $ newlines
        [ label st ++ " <-- " ++ v ++ " != 0;"
        , v ++ " += nilnil;"
        , v ++ " != nilnil --> " ++ label st ++ ";"
        ]
evalInvPattern (Const c) v =
  do st <- innerTick
     return $ newlines
        [ v ++ " != 0 --> " ++ invP ++ label st ++ ";"
        , v ++ " += " ++ show rval ++ ";"
        , invP ++ label st ++ " <-- " ++ v ++ " != " ++ show rval ++ ";"
        ]
  where invP = "inv_" ++ show (2*c+1)
        rval = if c == 2 then c else 2*c+1
evalInvPattern p@(Pair car cdr) v =
  do putVars p
     st1 <- innerTick
     st2 <- innerTick
     st3 <- innerTick
     let t1 = "inv_t" ++ label st1 ++ unique p
     let t2 = "inv_t" ++ label st2 ++ unique p
     car' <- evalPattern car t1
     putVars p
     carInv' <- evalInvPattern car t1
     cdrInv' <- evalInvPattern cdr t2
     return $ newlines
        [ v  ++ " & 3 --> " ++ invP ++ label st1 ++ ";"
        , v ++ " == 0 --> " ++ invP ++ label st3 ++ ";"
        , "A <-> consP;"
        , "uncall cons;"
        , t1 ++ " <-> consA;"
        , t2 ++ " <-> consD;"
        , car'
        , t1 ++ " != 0 --> " ++ invP ++ label st2 ++";"
        , invP ++ label st3 ++ " <-- " ++ t2 ++ " == 0;"
        , cdrInv'
        , invP ++ label st2 ++ " <-- " ++ t1 ++ " != 0;"
        , carInv'
        , t1 ++ " <-> consA;"
        , t2 ++ " <-> consD;"
        , "call cons;"
        , v ++ " <-> consP;"
        , invP ++ label st1 ++ " <-- "++ v ++ " & 3;"
        ]
  where invP = "inv_" ++ unique p
evalInvPattern (Neq id pat) _ = undefined
evalInvPattern (As id pat) _ = undefined

evalDef def =
  do env <- ask
     putVars $ res def
     putVars $ input def
     innerTick
     st <- get
     innerTick
     st2 <- get
     arg' <- evalInvPattern (input def) "A"
     l' <- evalPattern (res def) "A"
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
