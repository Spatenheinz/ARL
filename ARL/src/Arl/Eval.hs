module Arl.Eval where

-- import Control.Monad.Reader
-- import Control.Monad.Except
-- import Control.Monad.Identity
-- import Control.Monad.State
-- import qualified Data.Map as M
-- import Ast as A
-- import RIL as R

-- type Env = M.Map ID Value
-- type Fenv = M.Map ID [Rule]

-- -------------------- FUNCTIONS AND VARS -------------------------------

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


-- --------------------- MONAD AND EVAL --------------------------------

-- type Eval a = ReaderT Env (ExceptT String (StateT Integer Identity)) a

-- runEval :: Env -> Integer -> Eval a -> (Either String a, Integer)
-- runEval env st e = runIdentity (runStateT (runExceptT (runReaderT e env)) st)
  
-- label ::(Num s, MonadState s m) => m (Integer)
-- label = do st <- get
--            put $ st+1
--            return $ st

-- runProg :: String -> A.Prog -> IO()
-- runProg _ funcs =
--   case mkFE funcs of
--     Left l -> print l
--     Right env -> print $ M.toList env