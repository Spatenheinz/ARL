module Arl.Ast where

type ID = String

type Prog = ([Main],[Func])

type Main = [FC]

data FC = FCall ID
        | FUncall ID
    deriving(Show, Eq)

data Func = Func ID [Rule]
    deriving(Show, Eq)

data Rule = R Pattern [Def] Pattern
    deriving(Show,Eq)

data Def = Call Pattern ID Pattern
         | Uncall Pattern ID Pattern
         | Loop Pattern ID Pattern
         | Unloop Pattern ID Pattern
     deriving(Show,Eq)

data Pattern
    = Var ID
    | NilNil
    | Const Integer
    | Pair Pattern Pattern
    | Neq ID Pattern
    | As  ID Pattern
    deriving (Show, Eq)
