module Arl.Parser where

--import Prelude hiding --(GT, LT, EQ)
import Control.Monad (liftM, liftM2, mapM_, void, when)
import Data.Char
import Data.Either
import Text.Megaparsec
import Text.Megaparsec.Char
import qualified Text.Megaparsec.Char.Lexer as L
import Data.Void
import Arl.Ast
import Arl.Error

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

-- calls :: [String]
-- calls = ["!loop", "!", "loop"]

rws :: [String]
rws = ["fun", "main", "let", "in", "true", "false", "case", "of", "as"] -- ++ calls

rword :: String -> Parser ()
rword w = (lexeme . try) (string w >> notFollowedBy alphaNumChar)

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
programP = progP <* scn <* eof

progP :: Parser Prog
progP = do split <- liftM partitionEithers (some $ try funP)
           trace (show (fst split)) $ return $ split

identifier :: Parser ID
identifier = lexeme $ do
        lookAhead lowerChar;
        id' <- some $ (alphaNumChar <|> (oneOf "-_") <?> "identifier")
        return $ id'

funP :: Parser (Either Main Func)
funP = L.nonIndented scn $ L.lineFold scn p
  where
    p sc'    = do rword "fun"
                  id <- identifier
                  sc'
                  ind <- L.indentLevel
                  case id of
                    "main" -> liftM Left  $ mainP ind
                    _      -> liftM Right $ rest id ind
    rest id ind  = do r <- ruleP;
                      rs <- many $ try rules
                      mapM_ (\(_,x) -> when (x /= ind)
                          (L.incorrectIndent EQ ind x)) rs
                      return $ Func id $ r:(map fst rs)
    rules  = do scn; ind <- L.indentLevel; symbol "|"; r <- ruleP; return $ (r,ind)
    mainP ind = do symbol "="; L.indentGuard scn GT ind; ids <- some identifier; return $ ids

ruleP :: Parser Rule
ruleP = do p <- patternP
           symbol "="
           sc
           defs <- many defP
           res <- patternP
           return $ R p defs res

patternP :: Parser Pattern
patternP = try as <|> try neq <|> try nilnil <|> var <|> const' <|> try pair <|> parLE <?> "Pattern"
  where
    nilnil = rword "[[]]" >> return NilNil
    const' = (integer <|> nils) >>= return . Const
    nils   = rword "[]" >> return 2
    var    = identifier >>= return . Var
    neq    = do ident <- identifier; rword "<>"; pat <- patternP; return $ Neq ident pat
    as     = do ident <- identifier; rword "as"; pat <- patternP; return $ As ident pat
    pair   = parens (do lhs <- patternP; pairc; rhs <- patternP; return $ Pair lhs rhs) >>= return
    pairc  = string "::" <|> symbol ","
    parLE  = parens patternP

defP :: Parser Def
defP = try call <|> try loop <?> "Let def"
  where
      call   = do rword "let"
                  lhs <- patternP
                  symbol "="
                  uncall <- observing $ symbol "!"
                  fname <- identifier
                  rhs <- patternP
                  rword "in"
                  scn
                  case uncall of
                    Left _ -> return $ Call lhs fname rhs
                    Right _ -> return $ Uncall lhs fname rhs
      loop   = do rword "let"
                  lhs <- patternP
                  symbol "="
                  uncall <- observing $ symbol "!"
                  rword "loop"
                  fname <- identifier
                  rhs <- patternP
                  rword "in"
                  case uncall of
                    Left _ -> return $ Loop lhs fname rhs
                    Right _ -> return $ Unloop lhs fname rhs

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

parseFile :: String -> String -> Either (ParseErrorBundle String Void ) Prog
parseFile file str =
     case parse programP file str of
       Left e  -> Left $ e
       Right r -> Right r

-- exprP :: Parser Expr
-- exprP = try (L.lineFold scn letb) <|> try caseb <|>
--   (do e <- patternAP; return (LeftT e)) <?> "expression"
--   where
--     letb sc' = do ind <- L.indentLevel
--                   rword "let"
--                   sc'
--                   ind' <- L.indentLevel
--                   l <- some $ try ( do
--                     scn
--                     ind'' <- L.indentLevel
--                     lhs <- patternP
--                     symbol "="
--                     rhs <- patternAP
--                     return $ (lhs, rhs, ind'')
--                     )
--                   mapM_ (\(_,_,i) -> when (i /= ind')
--                           (L.incorrectIndent EQ ind' i)) l
--                   scn
--                   L.indentGuard sc EQ ind
--                   rword "in"
--                   sc'
--                   e <- exprP
--                   return $ foldr (\(le1, le2, _) ex ->
--                                     Let le1 le2 ex) e l
--     caseb    = do ind <- L.indentLevel
--                   rword "case"
--                   e <- patternAP
--                   rword "of"
--                   scn
--                   L.indentGuard scn GT ind
--                   ind' <- L.indentLevel
--                   c <- some $ try (L.lineFold scn cases)
--                   mapM_ (\(_,_,i) -> when (i < ind')
--                           (L.incorrectIndent EQ ind' i)) c
--                   return $ Case e $ map (\(x,y,_) -> (x,y)) c
--     cases sc'= do scn
--                   ind <- L.indentLevel
--                   le <- patternP
--                   symbol "->"
--                   sc'
--                   e <- exprP
--                   return (le, e, ind)
