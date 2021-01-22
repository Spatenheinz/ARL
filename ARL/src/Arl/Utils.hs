module Arl.Utils where

import Data.List (intercalate)
import Arl.Ast

-- flattens the vars in a pattern into a list
extractVars :: Pattern -> [ID]
extractVars (Var v) = [v]
extractVars (Pair car cdr) = extractVars car ++ extractVars cdr
extractVars (As x pair) = x : extractVars pair
extractVars (Neq x pair) = x : extractVars pair
extractVars _ = []

-- just easier now that we use it so much
newlines = intercalate "\n"

-- THIS IS RIL INSTRUCTIONS ----------------------------------------------------
-- CALLS
fCall f = "call " ++ f ++ ";"

fUncall f = "uncall " ++ f ++ ";"

-- JUMPS/ENTRIES
-- unconditionals
uJ l = " -->" ++ l

uE l = l ++ " <--"
-- is v a pointer ?
isPointerJ v l = v ++ " & 3 --> " ++ l ++ ";"

isPointerE l v = l ++ " <-- " ++ v ++ " & 3;"

-- is v == 0 ?
vEq0J v l = v ++ " == 0 --> " ++ l ++ ";"

vEq0E l v = l ++ " <-- " ++ v ++ " == 0;"

-- is v != 0 ?
vNeq0J v l = v ++ " != 0 --> " ++ l ++ ";"

vNeq0E l v = l ++ " <-- " ++ v ++ " != 0;"

-- is v != x ?
vNeqxE l v x = l ++ " <-- " ++ v ++ " != " ++ x ++ ";"

vNeqxJ v x l = v ++ " != " ++ x ++ " --> " ++ l ++ ";"

-- assert v == 0
assert0 v = "assert " ++ v ++ " == 0;"

--OPERATIONS
plus x v = x ++ " += " ++ v ++ ";"

sub x v = x ++ " -= " ++ v ++ ";"

consA x = x ++ " <-> consA;"

consD x = x ++ " <-> consD;"

consP x = x ++ " <-> consP;"

copyP x = x ++ " <-> copyP;"

copyQ x = x ++ " <-> copyQ;"

fieldsP x = x ++ " <-> fieldsP;"

fieldsA x = x ++ " <-> fieldsA;"

fieldsD x = x ++ " <-> fieldsD;"

swap x y = x ++ " <-> " ++ y ++ ";"

-- UNIQUE is simply the show function, which we use to uniquely identify
-- our stuff
class Unique a where
  unique :: a -> String

instance Unique Pattern where
  unique (Var v) = v
  unique NilNil = "nilnil"
  unique (Arl.Ast.Const c) = "C" ++ show c ++ "_"
  unique (Pair car cdr) = unique car ++ "_" ++ unique cdr
  unique (Neq id pat) = id ++ "_neq_" ++ unique pat
  unique (As id pat) = id ++ "_As_" ++ unique pat

instance Unique Def where
  unique x = unique (res x) ++ "_" ++ fname x ++ "_" ++ unique (input x) ++ "_"
