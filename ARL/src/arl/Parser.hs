module Parser where

import Prelude hiding (GT, LT, EQ)
import Control.Monad (liftM, liftM2)
import Data.Char
import Data.Either
import Text.Parsec hiding (empty)
import Text.Parsec.String
import Text.Parsec.Expr
import Text.Parsec.Pos
import qualified Text.Parsec.Error as PA
import qualified Text.Parsec.Token as T


import Ast

-- ParseErr :: PA.ParseError -> AErr
syntax = T.LanguageDef {
           T.commentStart   = "(*"
        ,  T.commentEnd     = "*)"
        ,  T.commentLine    = "--"
        ,  T.nestedComments = False
        ,  T.identStart     = letter
        ,  T.identLetter    = alphaNum <|> char '_'
        ,  T.opStart        = oneof ""
        ,  T.opLetter       = oneOf ""
        ,  T.reservedNames  = [ "fun"
                              , "let"
                              , "in"
                              , "case"
                              , "of"
                              , "loop"
                              ]
        ,  T.reservedOpNames= []
        ,  T.caseSensitive  = True
}

lexer = T.makeTokenParser syntax

tIdentifier = T.identifier lexer
reserved    = T.reserved lexer
reservedOP  = T.reservedOP lexer
stringLit   = T.stringLiteral lexer
parens      = T.parens lexer
brackets    = T.brackets lexer
integer     = T.integer lexer
semi        = T.semi lexer
comma       = T.comma lexer
symbol      = T.symbol lexer
whitespace  = T.whiteSpace lexer

identifier :: Parser Ident
identifier = do
        pos <- getPosition
        ident <- tIdentifier
        return $ Ident ident pos

program :: Parser Prog
program = do
       whiteSpace
       funs <- genFun
       eof
       return $ Prog funs

genFun :: Parser Func
genFun = do
       reserved "fun"
       id <- identifier
       rules' <- many rules
       return $ Func id rules'


      
