import Test.Hspec
import Test.Hspec.Megaparsec
import Text.Megaparsec
import Text.Megaparsec.Pos
import Arl.Parser
import Arl.Ast

cp = "can parse a(n) "
fo = "Failes to parse a(n) "

main :: IO ()
main = hspec $ do
  describe "Identifiers" $ do
    it (cp ++ "identifier") $ do
      parse identifier "" "a" `shouldParse`
        "a"
  describe "Patterns" $ do
    it (cp ++ "int") $ do
      parse patternP "" "8" `shouldParse`
        Const 8
    it (cp ++ "variable") $ do
      parse patternP "" "id" `shouldParse`
        Var "id"
    it (cp ++ "empty list - nil") $ do
      parse patternP "" "[]" `shouldParse`
         Const 2
    it (cp ++ "nilnil") $ do
      parse patternP "" "[[]]" `shouldParse`
         NilNil
    it (cp ++ "cons pair") $ do
      parse patternP "" "(x::xs)" `shouldParse`
        Pair (Var "x") (Var "xs")
    it (cp ++ "tuple pair") $ do
      parse patternP "" "(x,xs)" `shouldParse`
        Pair (Var "x") (Var "xs")
    it (cp ++ "multiple cons pairs") $ do
      parse patternP "" "(x::xs::xss)" `shouldParse`
        Pair (Var "x") (Pair (Var "xs") (Var "xss"))
    it (cp ++ "multiple tuple pairs") $ do
      parse patternP "" "(x,xs,xss)" `shouldParse`
        Pair (Var "x") (Pair (Var "xs") (Var "xss"))
    it (cp ++ "nested pairs") $ do
      parse patternP "" "((x::xs),y)" `shouldParse`
        Pair (Pair (Var "x") (Var "xs")) (Var "y")
    it (cp ++ "Higher precedence on Cons (::) than on Pair(,)") $ do
      parse patternP "" "(x::xs,y::ys)" `shouldParse`
        Pair (Pair (Var "x") (Var "xs")) (Pair (Var "y") (Var "ys"))
    it (cp ++ "as pattern") $ do
      parse patternP "" "a as (x::xs)" `shouldParse`
        As "a" (Pair (Var "x") (Var "xs"))
    it (cp ++ "as pattern insensitive") $ do
      parse patternP "" "a as(x::xs)" `shouldParse`
        As "a" (Pair (Var "x") (Var "xs"))
    it (cp ++ "not pattern") $ do
      parse patternP "" "a <> 2" `shouldParse`
        Neq "a" (Const 2)
    it (cp ++ "not pattern insensitive") $ do
      parse patternP "" "a <> 2" `shouldParse`
        Neq "a" (Const 2)
        
  describe "Let definitions" $ do
    it (cp ++ "simple call") $ do
      parse (defP pos1) "" "let a = f (x::xs) in" `shouldParse`
        Call (Var "a") "f" (Pair (Var "x") (Var "xs"))
    it (cp ++ "reverse call") $ do
      parse (defP pos1) "" "let a = !f (x::xs) in" `shouldParse`
        Uncall (Var "a") "f" (Pair (Var "x") (Var "xs"))
    it (cp ++ "reverse call space-insensitive") $ do
      parse (defP pos1) "" "let a = !\tf (x::xs) in" `shouldParse`
        Uncall (Var "a") "f" (Pair (Var "x") (Var "xs"))
    it (cp ++ "loop call") $ do
      parse (defP pos1) "" "let a = loop f (x::xs) in" `shouldParse`
       Loop (Var "a") "f" (Pair (Var "x") (Var "xs"))
    it (cp ++ "reverse loop call (!loop)") $ do
      parse (defP pos1) "" "let a = !loop f (x::xs) in" `shouldParse`
       Unloop (Var "a") "f" (Pair (Var "x") (Var "xs"))
    it (cp ++ "reverse loop call (!loop) space-insensitive") $ do
      parse (defP pos1) "" "let a = !loop f (x::xs) in" `shouldParse`
       Unloop (Var "a") "f" (Pair (Var "x") (Var "xs"))
       
  describe "Function parsing" $ do
    it (cp ++ "simple function - one rule") $ do
      parse funP "" "fun id a = a" `shouldParse`
        Right (Func "id" [R (Var "a") [] (Var "a")])
    it (cp ++ "function with multiple rules") $ do
      parse funP "" "fun id [] = []\n\
                    \    | a  = a " `shouldParse`
        Right (Func "id" [R (Const 2) [] (Const 2), R (Var "a") [] (Var "a")])
    it (fo ++ "bad indentation of rules") $ do
      parse funP "" "fun id [] = []\n\
                    \    | a  = a " `shouldParse`
        Right (Func "id" [R (Const 2) [] (Const 2), R (Var "a") [] (Var "a")])
    it (cp ++ "main") $ do
      parse funP "" "fun main = f" `shouldParse`
        Left [FCall "f"]
    it (cp ++ "main on a newline") $ do
      parse funP "" "fun main =\n\
                    \     f" `shouldParse`
        Left [FCall "f"]
  describe "Program parsing" $ do
    it (cp ++ "program with multiple functions") $ do
      parse progP "" "fun main = fst\n\
                     \fun fst (x,y) = x" `shouldParse`
        ([[FCall "fst"]], [Func "fst" [R (Pair (Var "x") (Var "y")) [] (Var "x")]])
  -- describe "File parsing" $ do
  --   it (cp ++ "a ARL file") $ do
  --     run "flip.arl" `shouldParse`
  --       ([[FUncall "flip",FCall "flip"]],
  --        [Func "flip"
  --         [R (Pair (Var "l") (Var "r"))
  --          [Call (Var "fl") "flip" (Var "l"),Call (Var "fr") "flip" (Var "r")]
  --          (Pair (Var "fr") (Var "lr")),
  --         R (Var "x") [] (Var "x")]])
          -- it "can parse a simple function" $ do
    --   parse funP "" "fun test a = a\n | test 1 = a" `shouldParse`
    --     (Func (Ident "test") [Var (Ident "a")])
