module Arl.RIL where

import Arl.Utils

build :: [Int] -> String
build lst = newlines
  [ "begin build"
  , makeList lst
  , "end build"
  ]

mainSetup :: String -> String
mainSetup n = newlines
  [ "begin main"
  , "includeC \"A = 0;\\n\";"
  , "// initialize hash codes"
  , "hashA += 366001;"
  , "hashB += 827927;"
  , "hashC += 593041;"
  , "hashT += hashA;"
  , "// heap size setup"
  , "b += 8; // segment size"
  , "b1 += b - 1;"
  , "hsize += 1<<" ++ n ++ ";"
  , "hsize += b1; // number of nodes = 2^m + b - 1"
  , "hsizeB += hsize << 2;"
  , "hsizeB += hsize << 2;"
  , "hsizeB += hsize << 2; // number of bytes"
  , "H += 4800; // heap start"
  , "endH += hsizeB + H; // heap end"
  , "lastH += endH - 12; // address of last node in heap"
  , "mask += 4<<" ++ n ++ ";"
  , "mask -= 4;"
  , "segSize += b1<<2;"
  , "segSize += b1<<2;"
  , "segSize += b1<<2;"
  , "stackP += endH;"
  , "stackP += 64;"
  , "call initialise;"
  , "call build;"
  ]

freeNodes :: String
freeNodes = newlines
  [ "includeC \"printf(\\\"max refs = %d\\\\n\\\",A);\";"
  , "assert z == 0;"
  , "z += H;"
  , "dump1 <-- H != z;"
  , "M[z] > 0 --> used1;"
  , "y += 1;"
  , "used1 <-- M[z] > 0;"
  , "z += 12;"
  , "z < endH --> dump1;"
  , "test y \"%d,\""
  , "end main"
  ]

initialize :: String
initialize = newlines
  [ "begin initialise"
  , "consA += 2;"
  , "consD += 2;"
  , "call cons;"
  , "nilnil <-> consP"
  , "end initialise"
  ]

copy :: String
copy = newlines
  [ "begin copy"
  , "assert copyP > 0 && copyQ == 0;"
  , "copyP !& 3 --> copySymbol;" --- copyP !& 3 =>
  , "M[copyP] += 1;"
  , "ttt += M[copyP];"
  , "includeC \"if (A < var_ttt) A = var_ttt;\";"
  , "ttt -= M[copyP];"
  , "copySymbol <-- copyP !& 3;" ---
  , "copyQ += copyP;"
  , "assert copyP > 0 && copyQ == copyP"
  , "end copy"
  ]

fields :: String
fields = newlines
  [ "begin fields"
  , "assert fieldsP > 0 && fieldsA == 0 && fieldsD == 0;"
  , "fieldsP += 4;"
  , "fieldsA += M[fieldsP];"
  , "fieldsA !& 3 --> fields1;"
  , "M[fieldsA] += 1;"
  , "fields1 <-- fieldsA !& 3;"
  , "fieldsP += 4;"
  , "fieldsD += M[fieldsP];"
  , "fieldsD !& 3 --> fields2;"
  , "M[fieldsD] += 1;"
  , "fields2 <-- fieldsD !& 3;"
  , "fieldsP -= 8;"
  , "assert fieldsP > 0 && fieldsA > 0 && fieldsD > 0"
  , "end fields"
  ]


cons :: String
cons = newlines
  [ "//The rest of the file is cons"
  , "begin cons"
  , "assert consA != 0;"
  , "assert consD != 0;"
  , "assert consP == 0;"
  , "assert hashV == 0;"
  , "assert segEnd == 0;"
  , "call hash;"
  , "segEnd += hashV + segSize;"
  , "consP += hashV;"
  , "consSearchSame <-- consP > hashV;"
  , "M[consP] == 0 --> consNext;"
  , "consP += 4;"
  , "M[consP] != consA --> consNotA;"
  , "consP += 4;"
  , "M[consP] == consD --> consFoundSame;"
  , "consP -= 4;"
  , "consNotA <-- M[consP] != consA;"
  , "consP -= 4;"
  , "consNext <-- M[consP] == 0;"
  , "consP += 12;"
  , "consP <= segEnd --> consSearchSame;"
  , "consSearchEmpty <-- consP <= segEnd;"
  , "consP -= 12;"
  , "consP < hashV --> consFail;"
  , "M[consP] != 0 --> consSearchEmpty;"
  , "segEnd -= hashV + segSize;"
  , "uncall hash;"
  , "M[consP] += 1;"
  , "consP += 4;"
  , "consA <-> M[consP];"
  , "consP += 4;"
  , "consD <-> M[consP];"
  , "consP -= 8;"
  , "consEnd <-- M[consP] > 1;"
  , "assert consP !& 3 && consP >= H && consA == 0 && consD == 0;"
  , "assert hashV == 0 && segEnd == 0;"
  , "failedCons <-- failed > 0 // return point for fail handler"
  , "end cons\n"
  , "consFoundSame <--"
  , "segEnd -= hashV + segSize; // was 60"
  , "uncall hash;"
  , "consD < H --> consSymbolD;"
  , "M[consD] -= 1;"
  , "consSymbolD <-- consD < H;"
  , "consD -= M[consP];"
  , "consP -= 4;"
  , "consA < H --> consSymbolA;"
  , "M[consA] -= 1;"
  , "consSymbolA <-- consA < H;"
  , "consA -= M[consP];"
  , "consP -= 4;"
  , "M[consP] += 1;"
  , "ttt += M[consP];"
  , "includeC \"if (A < var_ttt) A = var_ttt;\";"
  , "ttt -= M[consP]"
  , "--> consEnd"
  , "consFail <--"
  , "failed += 1;"
  , "assert z == 0;"
  , "z += H;"
  , "dump <-- H != z;"
  , "M[z] > 0 --> used;"
  , "y += 1;"
  , "used <-- M[z] > 0;"
  , "z += 12;"
  , "z < endH --> dump;"
  , "test y \" free nodes: %d,\""
  , "--> failedCons // jump to end of cons procedure\n"
  , "begin hash"
  , "assert hashV == 0 && hashT ==  366001;"
  , "hashT ^= consA << 7;"
  , "hashT += consA >> 1;"
  , "hashT ^= consD << 5;"
  , "hashT += consD >> 3;"
  , "hashV += hashT & mask;"
  , "hashV += hashT & mask;"
  , "hashV += hashT & mask;"
  , "hashV += H"
  , "end hash"
  ]
-- data Lval = Var String
--           | Mem String

-- data Rval = L Lval
--           | Const Integer

-- data UpdateOp = Add | Sub | XorWith

-- data ArithOp = Plus | Minus | Xor | And | Or | ShiftL | ShiftR

-- data RelOp = Equal | Less | Greater | Neq | Leq | Geq | IfAnd | IfNand

-- type Cond = (Lval, RelOp, Rval)

-- data Entry = Begin String
--            | Label String
--            | Join Cond String String

-- data Exit = End String
--           | Goto String
--           | Split Cond String String

-- data Instruct = Update Lval UpdateOp Rval ArithOp Rval
--               | Swap Lval Lval
--               | Call String
--               | Uncall String
--               | Assert [Cond]
--               | Read Lval
--               | Write Lval
--               | Test String [Rval]
--               | IncludeC String
--               | Skip
--               | Semi Instruct Instruct
--               | Timer

-- type Block = (Entry, Instruct, Exit)

-- type Prog = [Block]

-- showLval :: Lval -> String
-- showLval (Var v) = v
-- showLval (Mem m) = "M[" ++ m ++ "]"

-- showRval :: Rval -> String
-- showRval (L l) = showLval l
-- showRval (Const c) = show c

-- showUpOp :: UpdateOp -> String
-- showUpOp Add = " += "
-- showUpOp Sub = " -= "
-- showUpOp XorWith = " ^= "

-- showArithOp :: ArithOp -> String
-- showArithOp Plus = " + "
-- showArithOp Minus = " - "
-- showArithOp Xor = " ^ "
-- showArithOp And = " & "
-- showArithOp Or  = " | "
-- showArithOp ShiftL = " << "
-- showArithOp ShiftR = " >> "

-- showRelOp :: RelOp -> String
-- showRelOp Equal = " == "
-- showRelOp Less = " < "
-- showRelOp Greater = " > "
-- showRelOp Neq = " != "
-- showRelOp Leq = " <= "
-- showRelOp Geq = " >= "
-- showRelOp IfAnd = " & "
-- showRelOp IfNand = " !& "

-- showCond :: Cond -> String
-- showCond (l, rop, r) = showLval l ++ showRelOp rop ++ showRval r

-- showConds :: [Cond] -> String
-- showConds [] = ""
-- showConds [c] = showCond c
-- showConds (c : cs) = showCond c ++ " && " ++ showConds cs
-- -- showConds _ = raise Domain

-- showEntry :: Entry -> String
-- showEntry (Begin l) = "begin " ++ l
-- showEntry (Label l) = l ++ " <-- "
-- showEntry (Join c l1 l2) =  l1 ++ "; " ++ l2 ++ " <-- " ++ showCond c

-- showExit :: Exit -> String
-- showExit (End l) = "end " ++ l
-- showExit (Goto l) = " --> " ++ l
-- showExit (Split c l1 l2) = showCond c ++ " --> " ++ l1 ++ "; " ++ l2

-- showInstruct :: Instruct -> String
-- showInstruct (Update l uop r1 aop r2) =
--   showLval l ++ showUpOp uop ++ showRval r1 ++ showArithOp aop ++ showRval r2
-- showInstruct (Swap l1 l2) = showLval l1 ++ " <-> " ++ showLval l2
-- showInstruct (Call l) = "call " ++ l
-- showInstruct (Uncall l) = "uncall " ++ l
-- showInstruct (Assert cs) = "assert " ++ showConds cs
-- showInstruct (Read l) = "read " ++ showLval l
-- showInstruct (Write l) = "write " ++ showLval l
-- showInstruct (Test s rvs) =
--   "test " ++ s ++ " " ++ concat (map (\ r -> showRval r ++ " ") rvs)
-- showInstruct (IncludeC s) = "includeC " ++ s
-- showInstruct Skip = "skip"
-- showInstruct Timer = "timer"
-- showInstruct (Semi i1 i2) = showInstruct i1 ++ ";\n" ++ showInstruct i2

-- showBlock :: Block -> String
-- showBlock (en, is, ex)
--      = showEntry en ++ "\n" ++ showInstruct is ++ "\n" ++ showExit ex ++ "\n\n"

-- showProg :: Prog -> String
-- showProg bs = concat $ map showBlock bs
