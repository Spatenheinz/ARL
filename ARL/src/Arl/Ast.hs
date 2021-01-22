module Arl.Ast where

type ID = String

type Prog = ([Main],[Func])
type Prog' = (Main, [Func])

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
