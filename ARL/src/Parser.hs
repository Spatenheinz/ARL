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
import Error

-- ParseErr :: PA.ParseError -> AErr
syntax = T.LanguageDef {
           T.commentStart   = "(*"
        ,  T.commentEnd     = "*)"
        ,  T.commentLine    = "--"
        ,  T.nestedComments = False
        ,  T.identStart     = letter
        ,  T.identLetter    = alphaNum <|> char '_'
        ,  T.opStart        = oneOf ""
        ,  T.opLetter       = oneOf ""
        ,  T.reservedNames  = [ "fun"
                              , "let"
                              , "in"
                              , "case"
                              , "of"
                              , "loop"
                              , "true"
                              , "false"
                              ]
        ,  T.reservedOpNames= []
        ,  T.caseSensitive  = True
}

lexer = T.makeTokenParser syntax

tIdentifier = T.identifier lexer
reserved    = T.reserved lexer
reservedOp  = T.reservedOp lexer
stringLit   = T.stringLiteral lexer
parens      = T.parens lexer
brackets    = T.brackets lexer
integer     = T.integer lexer
semi        = T.semi lexer
comma       = T.comma lexer
symbol      = T.symbol lexer
whiteSpace  = T.whiteSpace lexer

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

rules :: Parser Rules
rules = do
      -- pat <- pattern'
      -- return $ pat
      return ()

-- pattern' :: Parser Pattern
-- pattern' = do

expression :: Parser Expr
expression = buildExpressionParser table term

addPos :: Parser (SourcePos -> a) -> Parser a
addPos parser = do
      pos <- getPosition
      t   <- parser
      return $ t pos

term :: Parser Expr
term =   parens expression
     <|> addPos numberExpr
     <|> addPos boolExpr
     <|> addPos lvalExpr
     <?> "expression"

numberExpr :: Parser (SourcePos -> Expr)
numberExpr = liftM Num integer

boolExpr :: Parser (SourcePos -> Expr)
boolExpr = (reserved "true" >> return (Boolean True))
        <|> (reserved "false" >> return (Boolean False))

lvalExpr :: Parser (SourcePos -> Expr)
lvalExpr = liftM LV lval

lval :: Parser Lval
lval = do
     ident <- identifier
     lookup <- optionMaybe (brackets expression)
     case lookup of
       Just e  -> return $ Lookup ident e
       Nothing -> return $ Var ident

table = [[ nots
                ]
               ,[ binop "*" Mul
                , binop "/" Div
                , binop "%" Mod
                ]
               ,[ binop "+" Add
                , binop "-" Sub
                ]
               ,[ binop "<=" LE
                , binop "<" LT
                , binop ">=" GE
                , binop ">" GT
                , binop "=" EQ
                , binop "!=" NEQ
                ]
               ,[ binop "&&" And
               , binop "||" Or
               ]
               ]
      where binop op t = Infix (reservedOp op >> return (BinOp t)) AssocLeft
            nots       = Prefix $ chainl1 notop $ return (.)
            notop      = symbol "!" >> return (UnaryOp Not)

parseString :: Parser a -> String -> a
parseString parser str =
  case parse parser "" str of
    Left e  -> error $ show e
    Right r -> r

parseExprString :: String -> Expr
parseExprString = parseString expression

-- parseStmtsString :: String -> [Stmt]
-- parseStmtsString = parseString (many1 statement)

parseFile :: String -> IO (Either AErr Prog)
parseFile file =
  do str <- readFile file
     case parse program file str of
       Left e  -> return $ Left $ toAErr e
       Right r -> return $ Right r

parseProgram :: String -> String -> Either AErr Prog
parseProgram filename text =
  case parse program filename text of
    Left e  -> Left $ toAErr e
    Right r -> Right r
