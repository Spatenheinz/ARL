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
rws = ["fun", "main", "let", "in", "true", "false", "case", "of", "as", "/="] ++ calls

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

sep' = comSep lExprP
colsep' = colSep lExprP

--                  PARSER

identifier :: Parser Ident
identifier = lexeme $ do
        lookAhead lowerChar
        -- pos <- getPosition
        ident' <- some $ (alphaNumChar <|> (oneOf "-_") <?>
                         "identifier cannot be the same as a keyword")
        return $ Ident ident'

funP :: Parser Func
funP = L.nonIndented scn $ L.lineFold scn p
  where
    p sc' = do rword "fun"
               id <- identifier
               p <- some lExprP
               symbol "="
               sc'
               e <- exprP
               rest <- many $ try pats
               return $ Func id $ map (\(x,y) -> FunPat x y) $ (p,e):rest
    pats  = do scn
               rword "|"
               p <- some lExprP
               symbol "="
               e <- exprP
               return $ (p,e)

guardP :: Parser Guard
guardP = try guard' <|> (return $ Guard [])
  where guard' = do
          symbol "|"
          gs <- lExprAP `sepBy1` comma
          return $ Guard gs
                 

lExprP :: Parser LExpr
lExprP = try as <|> try neq <|> vari <|> int <|>
  listf <|> try tuple <|> try listc <|> parLE <?> "Left-expression"
  where
    int    = do i <- integer
                return $ Int i
    vari   = do var <- identifier
                return $ Var var
    tuple  = do les <- parens $ sep'
                return $ Tuple les
    neq    = do ident <- identifier
                rword "/="
                les <- lExprP
                return $ Neq ident les
    as     = do ident <- identifier
                rword "as"
                les <- lExprP
                return $ As ident les
    listc  = do les <- parens $ colsep'
                return $ List $ foldr (\a b -> ListCons a b)
                      (ListEnd $ last les) (init les)
    listf  = do les <- brackets $ sep'
                return $ List $ foldr (\a b -> ListCons a b) ListNil les
    parLE  = parens lExprP

exprP :: Parser Expr
exprP = try (L.lineFold scn letb) <|> try caseb <|>
  (do e <- lExprAP; return (LeftT e)) <?> "expression"
  where
    letb sc' = do ind <- L.indentLevel
                  rword "let"
                  sc'
                  ind' <- L.indentLevel
                  l <- some $ try ( do
                    scn
                    ind'' <- L.indentLevel
                    lhs <- lExprP
                    symbol "="
                    rhs <- lExprAP
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
                  e <- lExprAP
                  rword "of"
                  scn
                  L.indentGuard scn GT ind
                  ind' <- L.indentLevel
                  c <- some $ try (L.lineFold scn cases)
                  mapM_ (\(_,_,_,i) -> when (i < ind')
                          (L.incorrectIndent EQ ind' i)) c
                  return $ Case e $ map (\(x,y,z,_) -> (x,y,z)) c
    cases sc'= do scn
                  ind <- L.indentLevel
                  le <- lExprP
                  symbol "->"
                  sc'
                  e <- exprP
                  return (le, Guard [], e, ind)


lExprAP :: Parser LExpr
lExprAP = try app <|> try lExprP <|> parLE  <?> "Left-expression"
  where
    app    = do inv <- optional $ choice $ map string calls
                scn
                fun <- identifier
                les <- many lExprP
                return $ App inv fun les
    parLE  = parens lExprAP


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
                return $ FunV $ ident i
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
