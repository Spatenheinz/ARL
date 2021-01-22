{-# LANGUAGE NamedFieldPuns #-}
module Arl.Parser where

--import Prelude hiding --(GT, LT, EQ)
import Control.Monad (liftM, liftM2, mapM_, void, when)
import Data.Char
import Data.Either
import Text.Megaparsec
import Text.Megaparsec.Char
import qualified Text.Megaparsec.Char.Lexer as L
import Control.Monad.Combinators.Expr
import Data.Void
import Data.Functor
import Arl.Ast

type Parser = Parsec Void String

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

rws :: [String]
rws = ["fun", "main", "let", "in", "true", "false", "case", "of", "as"]

rword :: String -> Parser ()
rword w = (lexeme . try) (string w >> notFollowedBy alphaNumChar)

integer :: Parser Integer
integer = lexeme $ L.signed sc L.decimal

parens :: Parser a -> Parser a
parens = between (symbol "(") (symbol ")")

brackets :: Parser a -> Parser a
brackets = between (symbol "[") (symbol "]")

--                  PARSER
progP :: Parser Prog
progP = do fmap partitionEithers (some $ try funP) <* scn <* eof

identifier :: Parser ID
identifier = lexeme $ do
        lookAhead lowerChar;
        some (alphaNumChar <|> oneOf "-_" <?> "identifier")

funC :: Parser FC
funC = lexeme $ do
    L.indentGuard scn EQ (mkPos 5)
    uncall <- observing $ symbol "!"
    let uncall' = case uncall of
                     Left _ -> FCall
                     Right _ -> FUncall
    uncall' <$> identifier

funP :: Parser (Either Main Func)
funP = L.nonIndented scn $ L.lineFold scn p
  where
    p sc'    = do rword "fun"
                  ind <- L.indentLevel
                  id <- identifier
                  -- s'
                  case id of
                    "main" -> Left <$> mainP
                    _      -> Right <$> rest id ind
    rest id ind  = do r <- ruleP ind;
                      rs <- many $ try rules
                      mapM_ (\(_,x) -> when (x /= mkPos 5)
                          (L.incorrectIndent EQ (mkPos 5) x)) rs
                      return $ Func id $ r:map fst rs
    rules  = do scn; ind <- L.indentLevel; symbol "|"; r <- ruleP ind; return (r,ind)
    mainP  = do symbol "="; some $ try funC

ruleP :: Pos -> Parser Rule
ruleP ind = do args <- patternP
               symbol "="
               scn
               ind' <- L.indentLevel
               L.indentGuard scn GT ind
               body <- many $ defP ind'
               L.indentGuard sc EQ ind'
               output <- patternP
               return $ Rule { args, body, output }

patternP :: Parser Pattern
patternP = try as <|> try neq <|> try nilnil <|> var <|> const' <|> try pair <|> parLE <?> "Pattern"
  where
    nilnil = rword "[[]]" >> return NilNil
    const' = (integer <|> nils) <&> Const
    nils   = rword "[]" >> return 2
    var    = identifier <&> Var
    neq    = do ident <- identifier; rword "<>"; Neq ident <$> patternP
    as     = do ident <- identifier; rword "as"; As ident <$> pair --patternP
    pair   = parens pairP
    pairP  = makeExprParser patternP
             [
                [InfixR $ Pair <$ symbol "::"],
                [InfixR $ Pair <$ symbol ","]
             ]
    parLE  = parens patternP

defP :: Pos -> Parser Def
defP ind = try call <|> try loop <?> "Let def"
  where
      call   = do L.indentGuard scn EQ ind;
                  rword "let"
                  res <- patternP
                  symbol "="
                  uncall <- observing $ symbol "!"
                  fname <- identifier
                  input <- patternP
                  rword "in"
                  scn
                  case uncall of
                    Left _ -> return $ Call { res, fname, input }
                    Right _ -> return $ Uncall { res, fname, input }
      loop   = do L.indentGuard scn EQ ind;
                  rword "let"
                  res <- patternP
                  symbol "="
                  uncall <- observing $ symbol "!"
                  rword "loop"
                  fname <- identifier
                  input <- patternP
                  rword "in"
                  scn
                  case uncall of
                    Left _ -> return $ Loop { res, fname, input }
                    Right _ -> return $ Unloop { res, fname, input }

parseFile :: String -> String -> Either (ParseErrorBundle String Void ) Prog
parseFile file str =
     case parse progP file str of
       Left e  -> Left e
       Right r -> Right r
