module Ast where

import Text.Megaparsec
import qualified Data.Map as M

-- type Env = M.Map Ident Func

type ID = String

type Prog = [Func]

data Func = Func ID [Rule]
    deriving(Show, Eq)

data Rule = R Pattern Expr
    deriving(Show,Eq)

data Expr
    = LeftT Pattern
    | Let Pattern Pattern Expr
    | Case Pattern [(Pattern, Expr)]
    deriving(Show, Eq)

-- data Guard = Guard [Pattern]
--            deriving (Eq, Show)

data Value = IntV Integer
           | TupleV [Value]
           | ListV  [Value]
           | FunV String
           deriving (Show, Eq)
data Pattern
    = Var ID
    | Const Integer
    -- | Tuple [Pattern]
    | Pair Pattern Pattern
    | Neq ID Pattern
    | As  ID Pattern
    | App (Maybe String) ID [Pattern]
    deriving (Show, Eq)

data Pairs
    = Cons Pattern Pairs
    | Last Pattern
    | Nil
    deriving (Show, Eq)

class Ident a where
  ident :: a -> ID

instance Ident Func where
  ident (Func id' _) = id'

class Rules a where
  rules :: a -> [Rule]
  
instance Rules Func where
  rules (Func _ r) = r
-- class Pattern a where
--   pattern' :: a ->

-- data UnaryOp
--      = Not
--      deriving (Eq, Ord)

-- Binary operators
-- data BinOp
--     = Add | Sub | Mul | Div | Mod     -- Arithmetic (+ - * / %)
--     -- | And | Or | Xor                  -- Binary (& | ^)
        --     | And | Or                      -- Logical (&& ||)
--     | GT | LT | EQ | NEQ | GE | LE    -- Relational (> < = != >= <=)
--     deriving (Eq, Ord, Show)
-- data Pattern
--     = Var Ident
--     | Const Integer
--     | Tuple [Pattern]
--     | List LExprList
--     | Neq Ident Pattern
--     | As  Ident Pattern
--     | App (Maybe String) Ident [Pattern]
--     deriving (Show, Eq)

-- data LExprList
--     = ListCons Pattern LExprList
--     | ListEnd Pattern
--     | Nil
--     deriving (Show, Eq)
