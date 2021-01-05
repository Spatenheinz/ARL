module RIL where

data Lval = Var String
          | Mem String

data Rval = L Lval
          | Const Integer

data UpdateOp = Add | Sub | XorWith

data ArithOp = Plus | Minus | Xor | And | Or | ShiftL | ShiftR

data RelOp = Equal | Less | Greater | Neq | Leq | Geq | IfAnd | IfNand

type Cond = (Lval, RelOp, Rval)

data Entry = Begin String
           | Label String
           | Join Cond String String

data Exit = End String
          | Goto String
          | Split Cond String String

data Instruct = Update Lval UpdateOp Rval ArithOp Rval
              | Swap Lval Lval
              | Call String
              | Uncall String
              | Assert [Cond]
              | Read Lval
              | Write Lval
              | Test String [Rval]
              | IncludeC String
              | Skip
              | Semi Instruct Instruct
              | Timer

type Block = (Entry, Instruct, Exit)

type Prog = [Block]

showLval :: Lval -> String
showLval (Var v) = v
showLval (Mem m) = "M[" ++ m ++ "]"

showRval :: Rval -> String
showRval (L l) = showLval l
showRval (Const c) = show c

showUpOp :: UpdateOp -> String
showUpOp Add = " += "
showUpOp Sub = " -= "
showUpOp XorWith = " ^= "

showArithOp :: ArithOp -> String
showArithOp Plus = " + "
showArithOp Minus = " - "
showArithOp Xor = " ^ "
showArithOp And = " & "
showArithOp Or  = " | "
showArithOp ShiftL = " << "
showArithOp ShiftR = " >> "

showRelOp :: RelOp -> String
showRelOp Equal = " == "
showRelOp Less = " < "
showRelOp Greater = " > "
showRelOp Neq = " != "
showRelOp Leq = " <= "
showRelOp Geq = " >= "
showRelOp IfAnd = " & "
showRelOp IfNand = " !& "

showCond :: Cond -> String
showCond (l, rop, r) = showLval l ++ showRelOp rop ++ showRval r

showConds :: [Cond] -> String
showConds [] = ""
showConds [c] = showCond c
showConds (c : cs) = showCond c ++ " && " ++ showConds cs
-- showConds _ = raise Domain

showEntry :: Entry -> String
showEntry (Begin l) = "begin " ++ l
showEntry (Label l) = l ++ " <-- "
showEntry (Join c l1 l2) =  l1 ++ "; " ++ l2 ++ " <-- " ++ showCond c

showExit :: Exit -> String
showExit (End l) = "end " ++ l
showExit (Goto l) = " --> " ++ l
showExit (Split c l1 l2) = showCond c ++ " --> " ++ l1 ++ "; " ++ l2

showInstruct :: Instruct -> String
showInstruct (Update l uop r1 aop r2) =
  showLval l ++ showUpOp uop ++ showRval r1 ++ showArithOp aop ++ showRval r2
showInstruct (Swap l1 l2) = showLval l1 ++ " <-> " ++ showLval l2
showInstruct (Call l) = "call " ++ l
showInstruct (Uncall l) = "uncall " ++ l
showInstruct (Assert cs) = "assert " ++ showConds cs
showInstruct (Read l) = "read " ++ showLval l
showInstruct (Write l) = "write " ++ showLval l
showInstruct (Test s rvs) =
  "test " ++ s ++ " " ++ concat (map (\ r -> showRval r ++ " ") rvs)
showInstruct (IncludeC s) = "includeC " ++ s
showInstruct Skip = "skip"
showInstruct Timer = "timer"
showInstruct (Semi i1 i2) = showInstruct i1 ++ ";\n" ++ showInstruct i2

showBlock :: Block -> String
showBlock (en, is, ex)
     = showEntry en ++ "\n" ++ showInstruct is ++ "\n" ++ showExit ex ++ "\n\n"

showProg :: Prog -> String
showProg bs = concat $ map showBlock bs



