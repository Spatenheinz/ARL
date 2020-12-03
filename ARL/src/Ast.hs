module Ast where

import Text.Megaparsec

data Prog
    = Prog [Func]

data Func = Func { funName :: Ident
                 , funPat  :: [FunPat] }
    deriving(Show, Eq)

data FunPat = FunPat { funParam :: [LExpr]
                     , funBody  :: Expr }
    deriving(Show,Eq)

data Ident =
  Ident String --SourcePos
  deriving(Show)

instance Eq Ident where
  (Ident ident1) == (Ident ident2) = ident1 == ident2

data UnaryOp
     = Not
     deriving (Eq, Ord)

-- Binary operators
-- data BinOp
--     = Add | Sub | Mul | Div | Mod     -- Arithmetic (+ - * / %)
--     -- | And | Or | Xor                  -- Binary (& | ^)
--     | And | Or                      -- Logical (&& ||)
--     | GT | LT | EQ | NEQ | GE | LE    -- Relational (> < = != >= <=)
--     deriving (Eq, Ord, Show)

data Expr
    = LeftT LExpr
    | Let LExpr LExpr Expr
    | Case LExpr [(LExpr, Guard, Expr)]
    deriving(Show, Eq)

data Guard = Guard [LExpr]
           deriving (Eq, Show)

data Value = IntV Integer
           | TupleV [Value]
           | ListV  [Value]
           | FunV String
           deriving (Show, Eq)

data LExpr
    = Var Ident
    | Int Integer
    | Tuple [LExpr]
    | List LExprList
    | Neq Ident LExpr
    | As  Ident LExpr
    | App (Maybe String) Ident [LExpr]
    deriving (Show, Eq)

data LExprList
    = ListCons LExpr LExprList
    | ListEnd LExpr
    | ListNil
    deriving (Show, Eq)

class Identifiable a where
  ident :: a -> String

instance Identifiable Ident where
  ident (Ident id') = id'

