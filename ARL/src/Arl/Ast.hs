module Arl.Ast where

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
