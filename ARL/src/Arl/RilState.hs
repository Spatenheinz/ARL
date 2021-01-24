{-# LANGUAGE FlexibleContexts #-}
{-# LANGUAGE NamedFieldPuns #-}
module Arl.RilState where

import Control.Monad.State
import Arl.Ast
import Arl.Utils
import Data.List
import qualified Data.Map as M

data RilState = RilState { ruleNo :: Int
                         , rLabel :: String
                         , fnameS :: ID
                         , labNo :: Int
                         , label :: String
                         , pVars :: M.Map ID Int
                         }
        deriving(Show)
emptyState = RilState { ruleNo = 1
                      , rLabel = "1"
                      , fnameS = ""
                      , labNo = 0
                      , label = ""
                      , pVars = M.empty
                      }

setFname :: (MonadState RilState m) => ID -> m RilState
setFname fname = do st <- get
                    put RilState { ruleNo = ruleNo st
                                 , rLabel = rLabel st
                                 , fnameS = fname
                                 , labNo = labNo st
                                 , label = label st
                                 , pVars = M.empty
                                 }
                    get

ruleTick :: (MonadState RilState m) => m RilState
ruleTick =
  do st <- get
     put RilState { ruleNo = ruleNo st + 1
                  , rLabel = show (ruleNo st + 1)
                  , fnameS = fnameS st
                  , labNo = labNo st
                  , label = label st
                  , pVars = M.empty
                  }
     get

innerTick :: (MonadState RilState m) => m RilState
innerTick =
  do st <- get
     put RilState { ruleNo = ruleNo st
                  , rLabel = rLabel st
                  , fnameS = fnameS st
                  , labNo = labNo st + 1
                  , label = fnameS st ++ show (labNo st+1)
                  , pVars = pVars st
                  }
     get


putVar :: (MonadState RilState m) => ID -> m RilState
putVar p =
  do st <- get
     put RilState { ruleNo = ruleNo st
                  , rLabel = rLabel st
                  , fnameS = fnameS st
                  , labNo  = labNo st
                  , label = fnameS st
                  , pVars = M.insert p 1 (pVars st)

                  }
     get

resetVar :: (MonadState RilState m) => m RilState
resetVar =
  do st <- get
     put RilState { ruleNo = ruleNo st
                  , rLabel = rLabel st
                  , fnameS = fnameS st
                  , labNo  = labNo st
                  , label = fnameS st
                  , pVars = M.empty
                  }
     get

fetchState :: (MonadState RilState m) => RilState -> m ()
fetchState st =
     put RilState { ruleNo = ruleNo st
                  , rLabel = rLabel st
                  , fnameS = fnameS st
                  , labNo = labNo st + 1
                  , label = fnameS st ++ show (labNo st+1)
                  , pVars = pVars st
                  }

resetSt :: (MonadState RilState m) => m()
resetSt = put emptyState

-- UTILS
-- makes the map used to check if a variables has already been used
copies :: [ID] -> M.Map ID Int
copies = M.fromList . map (\x -> (head x, length x)) . group . sort

-- takes a pattern and extracts the vars putting them into the map
getVars :: Pattern -> M.Map ID Int
getVars = copies . extractVars

