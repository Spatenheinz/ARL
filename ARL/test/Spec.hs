import Test.Hspec
import Test.Hspec.Megaparsec
import Text.Megaparsec
import Text.Megaparsec.Pos
import Arl.Parser
import Arl.Ast
import Arl.Utils
import System.IO

cp = "Can parse a(n) "
fo = "Failes to parse a(n) "
cc = "RIL operation: "

main :: IO ()
main = hspec $ do
  describe "Identifiers" $ do
    it (cp ++ "identifier") $ do
      parse identifier "" "a" `shouldParse`
        "a"
    it (cp ++ "complex identifier") $ do
      parse identifier "" "c_abaVSA-_ada88" `shouldParse`
        "c_abaVSA-_ada88"
    it (fo ++ "identifier starting with capital") $ do
      parse identifier "" `shouldFailOn` "C_88"
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
        Right (Func "id" [Rule { args = Var "a"
                               , body = []
                               , output = Var "a"
                               } ])
    it (cp ++ "function with multiple rules") $ do
      parse funP "" "fun id [] = []\n\
                    \    | a  = a " `shouldParse`
        Right (Func "id" [Rule { args = Const 2
                               , body = []
                               , output = Const 2
                               }
                         , Rule { args = Var "a"
                                , body = []
                                , output = Var "a"
                                }])
    it (fo ++ "bad indentation of rules") $ do
      parse funP "" `shouldFailOn` "fun id [] = []\n\
                                    \ | a  = a "
    it (fo ++ "bad indetation of body") $ do
      parse funP "" `shouldFailOn` "fun id a =\n\
                                    \  let a1 = f a in\n\
                                    \  a1"
    it (fo ++ "bad indetation of res") $ do
      parse funP "" `shouldFailOn` "fun id a = let a1 = f a in\n\
                                    \              a1"
    it (fo ++ "main, bad indentation") $ do
      parse funP "" `shouldFailOn` "fun main = f"
    it (cp ++ "main on a newline") $ do
      parse funP "" "fun main =\n\
                    \    f" `shouldParse`
        Left [FCall "f"]
  describe "Program parsing" $ do
    it (cp ++ "program with multiple functions") $ do
      parse progP "" "fun main =\n\
                     \    fst\n\
                     \fun fst (x,y) = x" `shouldParse`
        ([[FCall "fst"]], [Func "fst" [Rule { args = (Pair (Var "x") (Var "y"))
                                            , body = []
                                            , output = (Var "x")}
                                      ]])
  describe "File parsing" $ do
    it (cp ++ "a ARL file") $ do
      inp <- readFile "test/examples/flip.arl"
      parseFile "test/examples/flip.arl" inp `shouldParse`
        ([[FUncall "flip",FCall "flip"]],
         [Func "flip"
          [Rule { args = Pair (Var "l") (Var "r")
                , body =  [ Call (Var "fl") "flip" (Var "l"),
                            Call (Var "fr") "flip" (Var "r")
                          ]
                , output = Pair (Var "fr") (Var "fl")},
          Rule { args = Var "x"
               , body = []
               , output = Var "x"
               }
          ]])
  describe "Utility-functions for Eval" $ do
    it (cc ++ "function call") $ do
      fCall "flip" `shouldBe` "call flip;"
    it (cc ++ "function uncall") $ do
      fCall "flip" `shouldBe` "call flip;"
    it (cc ++ "unconditional jump") $ do
      uJ "label" `shouldBe` "--> label"
    it (cc ++ "unconditional entry") $ do
      uE "label" `shouldBe` "label <--"
    it (cc ++ "not a pointer jump") $ do
      nPointerJ "A" "label" `shouldBe` "A & 3 --> label;"
    it (cc ++ "not a pointer entry") $ do
      nPointerE "label" "A" `shouldBe` "label <-- A & 3;"
    it (cc ++ "equal to 0 jump") $ do
      vEq0J "A" "label" `shouldBe` "A == 0 --> label;"
    it (cc ++ "equal to 0 jump") $ do
      vEq0E "label" "A" `shouldBe` "label <-- A == 0;"
    it (cc ++ "not equal to 0 jump") $ do
      vNeq0J "A" "label" `shouldBe` "A != 0 --> label;"
    it (cc ++ "not equal to 0 jump") $ do
      vNeq0E "label" "A" `shouldBe` "label <-- A != 0;"
    it (cc ++ "not equal to x jump") $ do
      vNeqxJ "A" "x" "label" `shouldBe` "A != x --> label;"
    it (cc ++ "not equal to x entry") $ do
      vNeqxE "label" "A" "x" `shouldBe` "label <-- A != x;"
    it (cc ++ "plus update") $ do
      plus "x" "A" `shouldBe` "x += A;"
    it (cc ++ "sub update") $ do
      sub "x" "A" `shouldBe` "x -= A;"
    it (cc ++ "consA") $ do
      consA "x" `shouldBe` "x <-> consA;"
    it (cc ++ "consD") $ do
      consD "x" `shouldBe` "x <-> consD;"
    it (cc ++ "consP") $ do
      consP "x" `shouldBe` "x <-> consP;"
    it (cc ++ "copyQ") $ do
      copyQ "x" `shouldBe` "x <-> copyQ;"
    it (cc ++ "copyP") $ do
      copyP "x" `shouldBe` "x <-> copyP;"
    it (cc ++ "fieldsP") $ do
      fieldsP "x" `shouldBe` "x <-> fieldsP;"
    it (cc ++ "fieldsD") $ do
      fieldsD "x" `shouldBe` "x <-> fieldsD;"
    it (cc ++ "fieldsP") $ do
      fieldsA "x" `shouldBe` "x <-> fieldsA;"
    it (cc ++ "swap") $ do
      swap "A" "x" `shouldBe` "A <-> x;"
    it (cc ++ "assert equal 0") $ do
      assert0 "A" `shouldBe` "assert A == 0;"
