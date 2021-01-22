module Arl.Utils where

import Data.List

newlines = intercalate "\n"

fCall f = "call " ++ f ++ ";"

fUncall f = "uncall " ++ f ++ ";"

isPointerJ v l = v ++ " $ 3 --> " ++ l ++ ";"

isPointerE v l = l ++ " <-- " ++ v ++ " &"
