{-# LANGUAGE FlexibleContexts #-}

module Arl.RilState where

import Control.Monad.State
import Arl.Ast

data RilState = RilState { ruleNo :: Int
                         , fnameS :: ID
                         , labNo :: Int
                         }

emptyState = RilState { ruleNo = 1
                      , fnameS = ""
                      , labNo = 0
                      }

-- tick = do st <- get
--           put (st + 1)
setFname :: (MonadState RilState m) => ID -> m()
setFname fname = do st <- get
                    put RilState { ruleNo = ruleNo st
                                 , fnameS = fname
                                 , labNo = labNo st
                                 }

ruleTick :: (MonadState RilState m) => m()
ruleTick =
  do st <- get
     put RilState { ruleNo = ruleNo st + 1
                  , fnameS = fnameS st
                  , labNo = labNo st
                  }

innerTick :: (MonadState RilState m) => m()
innerTick =
  do st <- get
     put RilState { ruleNo = ruleNo st
                  , fnameS = fnameS st
                  , labNo = labNo st + 1
                  }

resetSt :: (MonadState RilState m) => m()
resetSt = put emptyState
