module Ast where

import Text.Parsec.Pos

data Type
     = Int SourcePos
     | Stack SourcePos
     | BoolT SourcePos

instance Eq Type where
   (Int _)   == (Int _) = True
   (Stack _) == (Stack _) = True
   (BoolT _) == (BoolT _) = True
   _         == _         = False

data Ident =
  Ident String SourcePos

instance Eq Ident where
  (Ident ident1 _) == (Ident ident2 _ ) = ident1 == ident2

data Lval
    = Var Ident
    | Lookup Ident Expr
    deriving (Eq)

data ModOp
     = AddEq  -- +=
     | SubEq  -- -=
     | XorEq  -- ^=
     deriving (Eq, Show)

data UnaryOp
     = Not
     deriving (Eq, Ord)

-- Binary operators
data BinOp
    = Add | Sub | Mul | Div | Mod     -- Arithmetic (+ - * / %)
    -- | And | Or | Xor                  -- Binary (& | ^)
    | And | Or                      -- Logical (&& ||)
    | GT | LT | EQ | NEQ | GE | LE    -- Relational (> < = != >= <=)
    deriving (Eq, Ord, Show)

data Expr
    = Num Integer SourcePos
    | Boolean Bool SourcePos
    | LV Lval SourcePos
    | UnaryOp UnaryOp Expr
    | BinOp BinOp Expr Expr
    deriving (Eq)

data Def
    = Def Pattern Pattern

data Pattern
     = Vname
     | Const
     | Neq Ident Pattern
     | Cons Pattern Pattern

data Rules
    = Pattern [Def] Pattern
    | Rules Rules

-- data MainFunc
--     = MainFunc Rules
    
data Func
    = Func Ident Rules 

data Prog
    = Prog [Func]

class Identifiable a where
  ident :: a -> String

instance Identifiable Ident where
  ident (Ident id _) = id

instance Identifiable Lval where
  ident (Var id) = ident id
  ident (Lookup id _) = ident id
