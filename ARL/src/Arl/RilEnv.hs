{-# LANGUAGE NamedFieldPuns #-}
module Arl.RilEnv where

import qualified Data.Map as M
import Arl.Ast
import Arl.Utils
-- READER
type Env = (String, M.Map String [ID])

baseEnv = ("A", M.empty)

getLiveVars :: Rule -> M.Map String [ID]
getLiveVars r@Rule{args, body, output} =
  let live = init (allVars (formatRule r)) in
  let defs = map unique body in
  M.fromList $ zip defs live

-- UTILS
defVar :: Def -> [ID]
defVar def = concatMap extractVars (res def : [input def])

formatRule :: Rule -> [[ID]]
formatRule Rule {args, body, output} =
  extractVars args : map defVar body ++ [extractVars output]

-- flattens the "formatRule"
liveVars :: [[ID]] -> [ID]
liveVars [] = []
liveVars [x] = []
liveVars [x,xs] = []
liveVars (x:xs:xss) = filter (`elem` head xss) x ++ liveVars( x: tail xss)

-- this waht we use
allVars [x] = []
allVars x = liveVars x : allVars (tail x)
