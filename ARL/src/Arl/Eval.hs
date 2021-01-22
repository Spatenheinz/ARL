{-# LANGUAGE NamedFieldPuns #-}
module Arl.Eval where

import Control.Monad.Reader
import Control.Monad.Except
import Control.Monad.Identity
import Control.Monad.State
import qualified Data.Map as M
import Arl.Ast
import Arl.RIL
import Arl.Utils
import Arl.RilState
import Arl.RilEnv

-- --------------------- MONAD AND EVAL --------------------------------

-- type Eval a = ReaderT Env (ExceptT String (StateT Integer Identity)) a

-- runEval :: Env -> Integer -> Eval a -> (Either String a, Integer)
-- runEval env st e = runIdentity (runStateT (runExceptT (runReaderT e env)) st)

type Eval a = ReaderT Env (StateT RilState Identity) a

runEval env st ev = runIdentity $ runStateT (runReaderT ev env) st

-- PROGRAM ---------------------------------------------------------------------
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

-- FUNCTION-CALLS --------------------------------------------------------------
evalFCall :: FC -> Eval String
evalFCall (FCall id) = return $ fCall id
evalFCall (FUncall id) = return $ fUncall id

-- FUNCTIONS -------------------------------------------------------------------
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

-- RULES -----------------------------------------------------------------------
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

-- PATTERNS --------------------------------------------------------------------
evalPattern :: Pattern -> Eval String
evalPattern (Var x) =
  do (v,_) <- ask
     st <- innerTick
     rmVar x
     case M.lookup x (pVars st) of
       Just _ -> return $ swap x v
       Nothing -> return $ newlines
                    [ vNeqxJ v x (label st)
                    , copyP x
                    , copyQ v
                    , "uncall copy;"
                    , copyP x
                    , vNeq0E (label st) v
                    ]
evalPattern NilNil =
  do (v,_) <- ask
     st <- innerTick
     return $ newlines
        [ vNeqxJ v "nilnil" (label st)
        , sub v "nilnil"
        , vNeq0E (label st) v
        ]
evalPattern (Const c) =
  do (v,_) <- ask
     st <- innerTick
     return $ newlines
        [ vNeqxJ v (show rval) (label st)
        , sub v (show rval)
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
        [ isPointerJ v (label st1)
        , consP v
        , "uncall cons;"
        , consA t1
        , consD t2
        , car'
        , vNeq0J t1 (label st2)
        , cdr'
        , vEq0J t2 (label st3)
        , vNeq0E (label st2) t1
        , carInv'
        , consA t1
        , consD t2
        , "call cons;"
        , consP v
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
evalPattern (As id p@(Pair car cdr)) =
  do (v,_) <- ask
     putVars p
     st1 <- innerTick
     st2 <- innerTick
     st3 <- innerTick
     let t1 = "t_" ++ show (labNo st1) ++ unique p
     let t2 = "t_" ++ show (labNo st2) ++ unique p
     car' <- local (const (t1, M.empty)) $ evalPattern car
     cdr' <- local (const (t2, M.empty)) $ evalPattern cdr
     putVars car
     carInv' <- local (const (t1, M.empty)) $ evalInvPattern car
     return $ newlines
        [ isPointerJ v (label st1)
        , fieldsP v
        , "call fields;"
        , fieldsP id
        , fieldsA t1
        , fieldsD t2
        , car'
        , vNeq0J t1 (label st2)
        , cdr'
        , vEq0J t2 (label st3)
        , vNeq0E (label st2) t1
        , carInv'
        , fieldsP id
        , fieldsA t1
        , fieldsD t2
        , "uncall fields;"
        , fieldsP v
        , vEq0E (label st3) v
        , isPointerE (label st1) v
        ]

-- INVERSE PATTERNS ------------------------------------------------------------
evalInvPattern :: Pattern -> Eval String
evalInvPattern (Var x) =
  do (v, _) <- ask
     st <- innerTick
     rmVar x
     case M.lookup x (pVars st) of
       Just _ -> return $ swap x v
       Nothing -> return $ newlines
                    [ vNeq0E (label st) v
                    , copyP x
                    , "call copy;"
                    , copyP x
                    , copyQ v
                    , vNeq0J v (label st)
                    ]
evalInvPattern NilNil =
  do (v,_) <- ask
     st <- innerTick
     return $ newlines
        [ vNeq0J (label st) v
        , plus v "nilnil"
        , vNeqxE (label st) v "nilnil"
        ]
evalInvPattern (Const c) =
  do (v,_) <- ask
     st <- innerTick
     return $ newlines
        [ vNeq0J v (invP ++ label st)
        , plus v (show rval)
        , vNeqxE (invP ++ label st) v (show rval)
        ]
  where invP = "inv_" ++ show (2*c+1)
        rval = if c == 2 then c else 2*c+1
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
evalInvPattern p@(Pair car cdr) =
  do (v, _) <- ask
     putVars p
     st1 <- innerTick
     st2 <- innerTick
     st3 <- innerTick
     let t1 = "inv_t_" ++ label st1 ++ unique p
     let t2 = "inv_t_" ++ label st2 ++ unique p
     car' <- local (const (t1, M.empty)) $ evalPattern car
     putVars p
     carInv' <- local (const (t1, M.empty)) $ evalInvPattern car
     cdrInv' <- local (const (t2, M.empty)) $ evalInvPattern cdr
     return $ newlines
        [ isPointerJ v (invP ++ label st1)
        , vEq0J v (invP ++ label st3)
        , consP v
        , "uncall cons;"
        , consA t1
        , consD t2
        , car'
        , vNeq0J t1 (invP ++ label st2)
        , vEq0E (invP ++ label st3) t2
        , cdrInv'
        , vNeq0E (invP ++ label st2) t1
        , carInv'
        , consA t1
        , consD t2
        , "call cons;"
        , consP v
        , isPointerE (invP ++ label st1) v
        ]
  where invP = "inv_" ++ unique p
evalInvPattern (As id p@(Pair car cdr)) =
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
        , fieldsP v
        , "call fields;"
        , fieldsD t2
        , fieldsA t1
        , fieldsP id
        , car'
        , vNeq0J t1 (invP ++ label st2)
        , vEq0E (invP ++ label st3) t2
        , cdrInv'
        , vNeq0E (invP ++ label st2) t1
        , carInv'
        , fieldsD t2
        , fieldsA t1
        , fieldsP id
        , "uncall fields;"
        , fieldsP v
        , isPointerE (invP ++ label st1) v
        ]
  where invP = "inv_" ++ unique p

-- LET DEFINITIONS -------------------------------------------------------------
evalDef :: Def -> Eval String
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
                     , assert0 v
                     ]
     let loop c = return $ newlines
                     [ vNeq0E (unique def ++ label st) v
                     , arg'
                     , l'
                     , vEq0J v (unique def ++ label st2)
                     ] ++ newlines push ++ newlines
                     [ "", c ++ " " ++ fname def, ""]
                     ++ newlines pop ++ newlines
                     [ uJ (unique def ++ label st)
                     , uE (unique def ++ label st2)
                     , assert0 v
                     ]
     case def of
       Call{} -> call "call"
       Uncall{} -> call "uncall"
       Loop{} -> loop "call"
       Unloop{} -> loop "uncall"

-- LIVE VARIABLES --------------------------------------------------------------
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
