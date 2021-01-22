{-# LANGUAGE FlexibleContexts #-}
{-# LANGUAGE NamedFieldPuns #-}
module Arl.RilState where

import Control.Monad.State
import Arl.Ast
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


putVars :: (MonadState RilState m) => Pattern -> m RilState
putVars p =
  do st <- get
     put RilState { ruleNo = ruleNo st
                  , rLabel = rLabel st
                  , fnameS = fnameS st
                  , labNo  = labNo st
                  , label = fnameS st
                  , pVars = M.union (getVars p) (pVars st)
                  }
     get

rmVar :: (MonadState RilState m) => ID -> m RilState
rmVar v =
  do st <- get
     put RilState { ruleNo = ruleNo st
                  , rLabel = rLabel st
                  , fnameS = fnameS st
                  , labNo  = labNo st
                  , label = fnameS st
                  , pVars = M.delete v (pVars st)
                  }
     get

resetSt :: (MonadState RilState m) => m()
resetSt = put emptyState

-- READER
getLiveVars :: Rule -> M.Map String [ID]
getLiveVars r@Rule{args, body, output} =
  let live = init (allVars (formatRule r)) in
  let defs = map unique body in
  M.fromList $ zip defs live

-- UTILS
extractVars :: Pattern -> [ID]
extractVars (Var v) = [v]
extractVars (Pair car cdr) = extractVars car ++ extractVars cdr
extractVars (As x pair) = x : extractVars pair
extractVars (Neq x pair) = x : extractVars pair
extractVars _ = []

copies :: [ID] -> M.Map ID Int
copies = M.fromList . map (\x -> (head x, length x)) . group . sort

getVars :: Pattern -> M.Map ID Int
getVars = copies . extractVars

dCount :: Int -> Maybe Int
dCount count = if count == 1 then Nothing else Just $ count-1

copiesVar :: Def -> [ID]
copiesVar def = concatMap extractVars (res def : [input def])

formatRule :: Rule -> [[ID]]
formatRule Rule {args, body, output} =
  extractVars args : map copiesVar body ++ [extractVars output]

liveVars :: [[ID]] -> [ID]
liveVars [] = []
liveVars [x] = []
liveVars [x,xs] = []
liveVars (x:xs:xss) = filter (`elem` head xss) x ++ liveVars( x: tail xss)

allVars [x] = []
allVars x = liveVars x : allVars (tail x)

