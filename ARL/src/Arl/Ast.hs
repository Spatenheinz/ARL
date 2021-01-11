module Arl.Ast where

type ID = String

type Prog = ([Main],[Func])

type Main = [ID]

data Func = Func ID [Rule]
    deriving(Show, Eq)

data Rule = R Pattern [Def] Pattern
    deriving(Show,Eq)

data Def = Call Pattern ID Pattern
         | Uncall Pattern ID Pattern
         | Loop Pattern ID Pattern
         | Unloop Pattern ID Pattern
     deriving(Show,Eq)

data Value = IntV Integer
           | TupleV [Value]
           | ListV  [Value]
           | FunV String
           deriving (Show, Eq)
data Pattern
    = Var ID
    | NilNil
    | Const Integer
    | Pair Pattern Pattern
    | Neq ID Pattern
    | As  ID Pattern
    deriving (Show, Eq)

-- class Ident a where
--   ident :: a -> ID

-- instance Ident Func where
--   ident (Func id' _) = id'

-- class Rules a where
--   rules :: a -> [Rule]
  
-- instance Rules Func where
--   rules (Func _ r) = r

-- Binary operators
-- data BinOp
--     = Add | Sub | Mul | Div | Mod     -- Arithmetic (+ - * / %)
--     -- | And | Or | Xor                  -- Binary (& | ^)
        --     | And | Or                      -- Logical (&& ||)
--     | GT | LT | EQ | NEQ | GE | LE    -- Relational (> < = != >= <=)
--     deriving (Eq, Ord, Show)
