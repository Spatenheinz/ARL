import Test.Hspec
import Test.Hspec.Megaparsec
import Text.Megaparsec
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
  -- describe "Value Parsing" $ do
  --   it (cp ++ "int") $ do
  --     parse valueP "" "1" `shouldParse`
  --       IntV 1
  --   it (cp ++ "tuple") $ do
  --     parse valueP "" "(1,2)" `shouldParse`
  --       TupleV [IntV 1, IntV 2]
  --   it (cp ++ "empty list") $ do
  --     parse valueP "" "[]" `shouldParse`
  --       ListV []
  --   it (cp ++ "List") $ do
  --     parse valueP "" "[1,2,3]" `shouldParse`
  --       ListV [IntV 1, IntV 2, IntV 3]
  --   it (cp ++ "function value") $ do
  --     parse valueP "" "id" `shouldParse`
  --        FunV "id"
  describe "Patterns" $ do
    it (cp ++ "int") $ do
      parse patternP "" "8" `shouldParse`
        Const 8
    it (cp ++ "variable") $ do
      parse patternP "" "id" `shouldParse`
        (Var "id")
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
    it (cp ++ "nested pairs") $ do
      parse patternP "" "((x::xs),y)" `shouldParse`
        Pair (Pair (Var "x") (Var "xs")) (Var "y")
    it (cp ++ "Higher precedence on, than on ::") $ do
      parse patternP "" "(x::xs,y)" `shouldParse`
        Pair (Pair (Var "x") (Var "xs")) (Var "y")
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
      parse defP "" "let a = f (x::xs) in" `shouldParse`
        Call (Var "a") "f" (Pair (Var "x") (Var "xs"))
    it (cp ++ "reverse call") $ do
      parse defP "" "let a = !f (x::xs) in" `shouldParse`
        Uncall (Var "a") "f" (Pair (Var "x") (Var "xs"))
    it (cp ++ "reverse call space-insensitive") $ do
      parse defP "" "let a = !\tf (x::xs) in" `shouldParse`
        Uncall (Var "a") "f" (Pair (Var "x") (Var "xs"))
    it (cp ++ "loop call") $ do
      parse defP "" "let a = loop f (x::xs) in" `shouldParse`
       Loop (Var "a") "f" (Pair (Var "x") (Var "xs"))
    it (cp ++ "reverse loop call (!loop)") $ do
      parse defP "" "let a = !loop f (x::xs) in" `shouldParse`
       Unloop (Var "a") "f" (Pair (Var "x") (Var "xs"))
    it (cp ++ "reverse loop call (!loop) space-insensitive") $ do
      parse defP "" "let a = !loop f (x::xs) in" `shouldParse`
       Unloop (Var "a") "f" (Pair (Var "x") (Var "xs"))
       
  describe "Function parsing" $ do
    it (cp ++ "simple function - one rule") $ do
      parse funP "" "fun id a = a" `shouldParse`
        (Right $ Func "id" [(R (Var "a") [] (Var "a"))])
    it (cp ++ "function with multiple rules") $ do
      parse funP "" "fun id [] = []\n\
                    \     | a  = a " `shouldParse`
        (Right $ Func "id" [R (Const 2) [] (Const 2), R (Var "a") [] (Var "a")])
    it (fo ++ "bad indentation of rules") $ do
      parse funP "" "fun id [] = []\n\
                    \     | a  = a " `shouldParse`
        (Right $ Func "id" [R (Const 2) [] (Const 2), R (Var "a") [] (Var "a")])
    it (cp ++ "main") $ do
      parse funP "" "fun main = f" `shouldParse`
        (Left $ ["f"])
    it (cp ++ "main on a newline") $ do
      parse funP "" "fun main =\n\
                    \    f" `shouldParse`
        (Left $ ["f"])
  -- describe "Program parsing" $ do
  --   it (cp ++ "a program with multiple functions") $ do
  --         -- it "can parse a simple function" $ do
  --   --   parse funP "" "fun test a = a\n | test 1 = a" `shouldParse`
  --   --     (Func (Ident "test") [Var (Ident "a")])
