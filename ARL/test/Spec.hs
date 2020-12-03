import Test.Hspec
import Test.Hspec.Megaparsec
import Text.Megaparsec
import Parser
import Ast

cp = "can parse a(n) "

main :: IO ()
main = hspec $ do
  describe "Identifiers" $ do
    it (cp ++ "identifier") $ do
      parse identifier "" "a" `shouldParse`
        Ident "a"
  describe "Value Parsing" $ do
    it (cp ++ "int") $ do
      parse valueP "" "1" `shouldParse`
        IntV 1
    it (cp ++ "tuple") $ do
      parse valueP "" "(1,2)" `shouldParse`
        TupleV [IntV 1, IntV 2]
    it (cp ++ "empty list") $ do
      parse valueP "" "[]" `shouldParse`
        ListV []
    it (cp ++ "List") $ do
      parse valueP "" "[1,2,3]" `shouldParse`
        ListV [IntV 1, IntV 2, IntV 3]
    it (cp ++ "function value") $ do
      parse valueP "" "id" `shouldParse`
         FunV "id"
  describe "Left expressions" $ do
    it (cp ++ "int") $ do
      parse lExprP "" "8" `shouldParse`
        Int 8
    it (cp ++ "variable") $ do
      parse lExprP "" "id" `shouldParse`
        (Var (Ident "id"))
    it (cp ++ "tuple") $ do
      parse lExprP "" "(1,2)" `shouldParse`
        Tuple [Int 1, Int 2]
    it (cp ++ "empty list") $ do
      parse lExprP "" "[]" `shouldParse`
        List ListNil
    it (cp ++ "non-empty list") $ do
      parse lExprP "" "[1,2,3]" `shouldParse`
        List ( ListCons (Int 1) (ListCons (Int 2) (ListCons (Int 3) ListNil)))
    it (cp ++ "cons pattern") $ do
      parse lExprP "" "(x:xs)" `shouldParse`
        List (ListCons (Var (Ident "x")) (ListEnd (Var (Ident "xs"))))
    it (cp ++ "as pattern") $ do
      parse lExprP "" "a as (x:xs)" `shouldParse`
        As (Ident "a") (List (ListCons (Var (Ident "x"))
                              (ListEnd (Var (Ident "xs")))))
    it (cp ++ "not pattern") $ do
      parse lExprP "" "a /= 2" `shouldParse`
        Neq (Ident "a") (Int 2)
  describe "can Parse expr application" $ do
    it (cp ++ "simple call") $ do
      parse lExprAP "" "a b c" `shouldParse`
        App Nothing (Ident "a") [Var (Ident "b"), Var (Ident "c")]
    it (cp ++ "reverse call") $ do
      parse lExprAP "" "!a b c" `shouldParse`
        App (Just "!") (Ident "a") [Var (Ident "b"), Var (Ident "c")]
    it (cp ++ "loop call") $ do
      parse lExprAP "" "loop a b c" `shouldParse`
        App (Just "loop") (Ident "a") [Var (Ident "b"), Var (Ident "c")]
    it (cp ++ "reverse loop call (!loop)") $ do
      parse lExprAP "" "!loop a b c" `shouldParse`
        App (Just "!loop") (Ident "a") [Var (Ident "b"), Var (Ident "c")]
       
  describe "Function parsing" $ do
    it (cp ++ "simple function") $ do
      parse funP "" "fun id a = a" `shouldParse`
        Func {funName = Ident "id",
            funPat = [ FunPat {funParam = [Var (Ident "a")],
                               funBody = LeftT (App Nothing (Ident "a") [])
                              }
                     ]
           }
          -- it "can parse a simple function" $ do
    --   parse funP "" "fun test a = a\n | test 1 = a" `shouldParse`
    --     (Func (Ident "test") [Var (Ident "a")])
