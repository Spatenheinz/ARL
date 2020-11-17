signature Compiler =
sig

  exception Error of string*(int*int)

  val compile : RIL.prog -> string
end
