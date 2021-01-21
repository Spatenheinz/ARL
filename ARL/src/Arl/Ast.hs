module Arl.Ast where

import Data.List

type ID = String

type Prog = ([Main],[Func])

type Main = [FC]

data FC = FCall ID
        | FUncall ID
    deriving(Show, Eq)

data Func = Func ID [Rule]
    deriving(Show, Eq)

data Rule = Rule { args :: Pattern, body :: [Def], output :: Pattern }
    deriving(Show,Eq)

data Def = Call { res :: Pattern, fname :: ID, input :: Pattern }
         | Uncall { res :: Pattern, fname :: ID, input :: Pattern }
         | Loop { res :: Pattern, fname :: ID, input :: Pattern }
         | Unloop { res :: Pattern, fname :: ID, input :: Pattern }
     deriving(Show, Eq)

data Pattern
    = Var ID
    | NilNil
    | Const Integer
    | Pair Pattern Pattern
    | Neq ID Pattern
    | As  ID Pattern
    deriving (Show, Eq)

class Ident a where
  ident :: a -> ID

instance Ident FC where
  ident (FCall id) = id
  ident (FUncall id) = id

instance Ident Func where
  ident (Func id _) = id

instance Ident Def where
  ident (Call _ id _) = id
  ident (Uncall _ id _) = id
  ident (Loop _ id _) = id
  ident (Unloop _ id _) = id


extractVars :: Pattern -> [ID]
extractVars (Var v) = [v]
extractVars (Pair car cdr) = extractVars car ++ extractVars cdr
extractVars (As x pair) = x : extractVars pair
extractVars (Neq x pair) = x : extractVars pair
extractVars _ = []

copies :: [ID] -> [(ID, Int)]
copies = map (\x -> (head x, length x)) . group

vAndC = copies . extractVars

copiesVar :: Def -> [(ID, Int)]
copiesVar def = concatMap (copies . extractVars) (res def : [input def])

formatRule :: Rule -> [[(ID, Int)]]
formatRule Rule {args, body, output} =
  vAndC args : map copiesVar body ++ [vAndC output]

liveVars :: [[ID]] -> [ID]
liveVars [] = []
liveVars [x] = []
liveVars [x,xs] = []
liveVars (x:xs:xss) = filter (`elem` head xss) x ++ liveVars( x: tail xss)

allVars [x] = []
allVars x = liveVars x : allVars (tail x)

-- mkEnv :; [Func] -> Map ID (Map ID Int)
mkenv (Func fname rules) =
  let idxs =  map (\x -> fname ++ unique (args x)) rules in
  let vars = map formatRule rules in
  zip idxs vars

-- mkEnv
class Unique a where
  unique :: a -> String

instance Unique Pattern where
  unique (Var v) = v
  unique NilNil = "nilnil"
  unique (Arl.Ast.Const c) = "C" ++ show c ++ "_"
  unique (Pair car cdr) = unique car ++ "_" ++ unique cdr
  unique (Neq id pat) = id ++ "_neq_" ++ unique pat
  unique (As id pat) = id ++ "_As_" ++unique pat

instance Unique Def where
  unique x = unique (res x) ++ "_" ++ fname x ++ "_" ++ unique (input x) ++ "_"
