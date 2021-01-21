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

type Env = M.Map ID Int
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

-- runEval :: Env -> RilState -> Eval a -> a
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
evalFCall (FCall id) = return $ "call " ++ id ++ ";"
evalFCall (FUncall id) = return $ "uncall " ++ id ++ ";"

evalFun :: Func -> Eval String
evalFun (Func id rules) =
  do setFname id
     st <- get
     rules' <- mapM evalRules rules
     st' <- get
     resetSt
     return $ newlines
            [ "begin " ++ id
            , "skip"
            , "--> " ++ fnameS st ++ "_entry_" ++ show (ruleNo st)
            , fnameS st ++ "_exit_" ++ show (ruleNo st) ++ " <--"
            , "skip"
            , "end " ++ id
            , "\n"
            ] ++ newlines rules' ++
            newlines
            [ fnameS st ++ "_entry_" ++ show (ruleNo st') ++ " <--"
            , "assert A != A"
            , "--> " ++ fnameS st ++ "_exit_" ++ show (ruleNo st')
            ]

evalRules :: Rule -> Eval String
evalRules Rule {args, body, output} =
  do st <- get
     res' <- evalInvPattern output "A"
     inp' <- evalPattern args "A"
     defs' <- mapM evalDef body
     ruleTick
     return $ newlines
            [ fnameS st ++ "_entry_" ++ show (ruleNo st) ++ " <--"
            , "// input of rule" ++ show (ruleNo st)
            , inp'
            , "A != 0 --> " ++ fnameS st ++ "_entry_" ++ show (ruleNo st + 1) ++ ";"
            , "\n//def starts here\n"
            , newlines defs'
            , fnameS st ++ "_exit_" ++ show (ruleNo st + 1) ++ " <-- A != 0;"
            , "\n // res starts here\n"
            , res'
            , "skip"
            , "--> " ++ fnameS st ++ "_exit_" ++ show (ruleNo st)
            , "\n"
            ]

evalPattern :: Pattern -> String -> Eval String
evalPattern (Var x) v = return $ x ++ " <-> " ++ v ++ ";"
evalPattern NilNil _ = undefined
evalPattern (Const c) v =
  do innerTick
     st <- get
     return $ newlines
        [ v ++ " != " ++ show rval ++ " --> " ++ fnameS st ++ show (labNo st) ++ ";"
        , v ++ " -= " ++ show rval ++ ";"
        , fnameS st ++ show (labNo st) ++ " <-- " ++ v ++ " != 0;"
        ]
  where rval = if c == 2 then c else c*2+1
evalPattern p@(Pair car cdr) v =
  do innerTick
     st1 <- get
     innerTick
     st2 <- get
     innerTick
     st3 <- get
     let t1 = "t" ++ show (labNo st1) ++ show p
     let t2 = "t" ++ show (labNo st2) ++ show p
     car' <- evalPattern car t1
     cdr' <- evalPattern cdr t2
     carInv' <- evalInvPattern car t1
     return $ newlines
        [ "\n//Patterns starts here"
        , v ++ " & 3 --> " ++ show p ++ show (labNo st1) ++ ";"
        , v ++ " <-> consP;"
        , "uncall cons;"
        , t1 ++ " <-> consA;"
        , t2 ++ " <-> consD;"
        , car'
        , t1 ++ " != 0 -->" ++ show p ++ show (labNo st2 ) ++ ";"
        , cdr'
        , t2 ++ " == 0 -->" ++ show p ++ show (labNo st3) ++ ";"
        , show p ++ show (labNo st2) ++ " <-- " ++ t1 ++ " != 0;"
        , carInv'
        , t1 ++ " <-> consA;"
        , t2 ++ " <-> consD;"
        , "call cons;"
        , v ++ " <-> consP;"
        , show p ++ show (labNo st3) ++ " <-- A == 0;"
        , show p ++ show (labNo st1) ++ " <-- A & 3;"
        ]
evalPattern (Neq id pat) _ = undefined
evalPattern (As id pat) _ = undefined

evalDef :: Def -> Eval String
evalDef d@Call {res, fname, input} =
  do arg' <- evalInvPattern input "A"
     l' <- evalPattern res "A"
     return $ newlines
        [ arg'
        , "call " ++ fname ++ ";"                                    ---- how much should be in here?
        , l'
        , "assert A == 0;"
        ]
evalDef d@Uncall{res, fname, input} = undefined
evalDef d@Loop {res, fname, input} =
  do innerTick
     st <- get
     innerTick
     st2 <- get
     arg' <- evalInvPattern input "A"
     l' <- evalPattern res "A"
     return $ newlines
        [ show d ++ show (labNo st) ++ " <-- A != 0;"
        , arg'
        , l'
        , "A == 0 --> " ++ show d ++ show (labNo st2) ++ ";"
        , "call " ++ fname
        , "--> " ++ show d ++ show (labNo st)
        , show d ++ show (labNo st2) ++ " <--"
        , "assert A == 0;"
        ]
evalDef d@(Unloop l fname arg) = undefined

evalInvPattern :: Pattern -> String -> Eval String
evalInvPattern (Var x) v = return $ x ++ " <-> " ++ v ++ ";"
evalInvPattern NilNil _ = undefined
evalInvPattern (Const c) v =
  do innerTick
     st <- get
     return $ newlines
        [ v ++ " != 0 --> " ++ invP ++ fnameS st ++ show (labNo st) ++ ";"
        , v ++ " += " ++ show rval ++ ";"
        , invP ++ fnameS st ++ show (labNo st) ++ " <-- " ++ v ++ " != " ++ show rval ++ ";"
        ]
  where invP = "inv_" ++ show (2*c+1)
        rval = if c == 2 then c else 2*c+1
evalInvPattern p@(Pair car cdr) v =
  do innerTick
     st1 <- get
     innerTick
     st2 <- get
     innerTick
     st3 <- get
     let t1 = "inv_t" ++ show (labNo st1) ++ show p
     let t2 = "inv_t" ++ show (labNo st2) ++ show p
     car' <- evalPattern car t1
     carInv' <- evalInvPattern car t1
     cdrInv' <- evalInvPattern cdr t2
     return $ newlines
        [ v  ++ " & 3 --> " ++ invP ++ show (labNo st1) ++ ";"
        , v ++ " == 0 --> " ++ invP ++ show (labNo st3) ++ ";"
        , "A <-> consP;"
        , "uncall cons;"
        , t1 ++ " <-> consA;"
        , t2 ++ " <-> consD;"
        , car'
        , t1 ++ " != 0 --> " ++ invP ++ show (labNo st2) ++";"
        , invP ++ show (labNo st3) ++ " <-- " ++ t2 ++ " == 0;"
        , cdrInv'
        , invP ++ show (labNo st2) ++ " <-- " ++ t1 ++ " != 0;"
        , carInv'
        , t1 ++ " <-> consA;"
        , t2 ++ " <-> consD;"
        , "call cons;"
        , v ++ " <-> consP;"
        , invP ++ show (labNo st1) ++ " <-- "++ v ++ " & 3;"
        ]
  where invP = "inv_" ++ show p
evalInvPattern (Neq id pat) _ = undefined
evalInvPattern (As id pat) _ = undefined


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
