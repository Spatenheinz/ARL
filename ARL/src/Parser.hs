module Parser where

--import Prelude hiding --(GT, LT, EQ)
import Control.Monad (liftM, liftM2, mapM_, void, when)
import Data.Char
import Data.Either
import Text.Megaparsec
import Text.Megaparsec.Char
import qualified Text.Megaparsec.Char.Lexer as L
import Data.Void
import Ast
import Error

import Debug.Trace

type Parser = Parsec Void String
-- ParseErr :: PA.ParseError -> AErr

--                  LEXER
lineComment :: Parser ()
lineComment = L.skipLineComment "//"

blockComment :: Parser ()
blockComment = L.skipBlockComment "(*" "*)"

colon :: Parser String
colon = symbol ":"

comma :: Parser String
comma = symbol ","

scn :: Parser ()
scn = L.space space1 lineComment empty

sc :: Parser ()
sc = L.space (void $ oneOf " \t") lineComment empty

lexeme :: Parser a -> Parser a
lexeme = L.lexeme sc

symbol :: String -> Parser String
symbol = L.symbol sc

calls :: [String]
calls = ["!loop", "!", "loop"]

rws :: [String]
rws = ["fun", "main", "let", "in", "true", "false", "case", "of", "as", "/=", "::"] ++ calls

rword :: String -> Parser ()
rword w = (lexeme . try) (string w *> notFollowedBy alphaNumChar)

integer :: Parser Integer
integer = lexeme $ L.signed sc L.decimal

parens :: Parser a -> Parser a
parens = between (symbol "(") (symbol ")")

brackets :: Parser a -> Parser a
brackets = between (symbol "[") (symbol "]")

--                 PARSER-UTILS

comSep p = p `sepBy` comma
colSep p = p `sepBy1` colon

sep' = comSep patternP
colsep' = colSep patternP

--                  PARSER

programP :: Parser Prog
programP =  some funP

identifier :: Parser ID
identifier = lexeme $ do
        lookAhead lowerChar
        -- pos <- getPosition
        ident' <- some $ (alphaNumChar <|> (oneOf "-_") <?>
                         "identifier cannot be the same as a keyword")
        return $ ident'

funP :: Parser Func
funP = L.nonIndented scn $ L.lineFold scn p
  where
    p sc' = do rword "fun"
               id <- identifier
               p <- patternP
               -- p <- some lExprP
               symbol "="
               sc'
               e <- exprP
               rest <- many $ try pats
               return $ Func id $ map (\(x,y) -> R x y) $ (p,e):rest
    pats  = do scn
               rword "|"
               p <- patternP
               -- p <- some lExprP
               symbol "="
               e <- exprP
               return $ (p,e)

-- guardP :: Parser Guard
-- guardP = try guard' <|> (return $ Guard [])
--   where guard' = do
--           symbol "|"
--           gs <- patternAP `sepBy1` comma
--           return $ Guard gs
                 

patternP :: Parser Pattern
patternP = try as <|> try neq <|> vari <|> int <|>
  -- listf <|> try tuple <|> try listc <|>
  try pair <|> parLE
  <?> "Left-expression"
  where
    int    = do i <- integer
                return $ Const i
    vari   = do var <- identifier
                return $ Var var
    -- tuple  = do les <- parens $ sep'
    --             return $ Tuple les
    neq    = do ident <- identifier
                rword "/="
                les <- patternP
                return $ Neq ident les
    as     = do ident <- identifier
                rword "as"
                les <- patternP
                return $ As ident les
    pair   = do p <- parens $ patternP `sepBy1` (string "::")
                return $ Pair (head p) (p !! 1)
    -- listc  = do les <- parens $ colsep'
    --             return $ Pair $ foldr (\a b -> Cons a b)
    --                   (Last $ last les) (init les)
    -- listf  = do les <- brackets $ sep'
    --             return $ Pair $ foldr (\a b -> Cons a b) Nil les
    parLE  = parens patternP

exprP :: Parser Expr
exprP = try (L.lineFold scn letb) <|> try caseb <|>
  (do e <- patternAP; return (LeftT e)) <?> "expression"
  where
    letb sc' = do ind <- L.indentLevel
                  rword "let"
                  sc'
                  ind' <- L.indentLevel
                  l <- some $ try ( do
                    scn
                    ind'' <- L.indentLevel
                    lhs <- patternP
                    symbol "="
                    rhs <- patternAP
                    return $ (lhs, rhs, ind'')
                    )
                  mapM_ (\(_,_,i) -> when (i /= ind')
                          (L.incorrectIndent EQ ind' i)) l
                  scn
                  L.indentGuard sc EQ ind
                  rword "in"
                  sc'
                  e <- exprP
                  return $ foldr (\(le1, le2, _) ex ->
                                    Let le1 le2 ex) e l
    caseb    = do ind <- L.indentLevel
                  rword "case"
                  e <- patternAP
                  rword "of"
                  scn
                  L.indentGuard scn GT ind
                  ind' <- L.indentLevel
                  c <- some $ try (L.lineFold scn cases)
                  mapM_ (\(_,_,i) -> when (i < ind')
                          (L.incorrectIndent EQ ind' i)) c
                  return $ Case e $ map (\(x,y,_) -> (x,y)) c
    cases sc'= do scn
                  ind <- L.indentLevel
                  le <- patternP
                  symbol "->"
                  sc'
                  e <- exprP
                  return (le, e, ind)


patternAP :: Parser Pattern
patternAP = try app <|> try patternP <|> parLE  <?> "Left-expression"
  where
    app    = do inv <- optional $ choice $ map string calls
                scn
                fun <- identifier
                les <- many patternP
                return $ App inv fun les
    parLE  = parens patternAP


valueP :: Parser Value
valueP = int <|> list <|> funId <|> try tuple <?>  "Value"
  where
    int    = do i <- integer
                return $ IntV i
    tuple  = do vs <- parens $ comSep valueP
                return $ TupleV vs
    list   = do vs <- brackets $ comSep valueP
                return $ ListV vs
    funId  = do i <- identifier
                return $ FunV $ i
-- parseString :: Parser a -> String -> a
-- parseString parser str =
--   case parse parser "" str of
--     Left e  -> error $ show e
--     Right r -> r

-- parseExprString :: String -> Expr
-- parseExprString = parseString expression

-- -- parseStmtsString :: String -> [Stmt]
-- -- parseStmtsString = parseString (many1 statement)

-- parseFile :: String -> IO (Either AErr Prog)
-- parseFile file =
--   do str <- readFile file
--      case parse program file str of
--        Left e  -> return $ Left $ toAErr e
--        Right r -> return $ Right r

-- parseProgram :: String -> String -> Either AErr Prog
-- parseProgram filename text =
--   case parse program filename text of
--     Left e  -> Left $ toAErr e
--     Right r -> Right r
