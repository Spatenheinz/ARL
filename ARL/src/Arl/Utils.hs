module Arl.Utils where

import Data.List

newlines = intercalate "\n"

-- CALLS
fCall f = "call " ++ f ++ ";"

fUncall f = "uncall " ++ f ++ ";"

-- JUMPS/ENTRIES
isPointerJ v l = v ++ " & 3 --> " ++ l ++ ";"

isPointerE l v = l ++ " <-- " ++ v ++ " & 3;"

vEq0J v l = l ++ " == 0 -->" ++ l ++ ";"

vEq0E l v = l ++ " <-- " ++ v ++ " == 0;"

vNeq0J v l = v ++ " != 0 --> " ++ l ++ ";"

vNeq0E l v = l ++ " <-- " ++ v ++ " != 0;"

vNeqxE l v x = l ++ " <-- " ++ v ++ " != " ++ x ++ ";"

vNeqxJ v x l = v ++ " != " ++ x ++ " --> " ++ l ++ ";"

assert0 v = "assert " ++ v ++ " == 0;"
--OPERATIONS
plus x v = x ++ " += " ++ v ++ ";"

sub x v = x ++ " -= " ++ v ++ ";"
