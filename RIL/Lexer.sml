local open Obj Lexing in


 open Lexing;

 exception LexicalError of string * (int * int) (* (message, (line, column)) *)

 val currentLine = ref 1
 val lineStartPos = ref [0]

 fun getPos lexbuf = getLineCol (getLexemeStart lexbuf)
				(!currentLine)
				(!lineStartPos)

 and getLineCol pos line (p1::ps) =
       if pos>=p1 then (line, pos-p1)
       else getLineCol pos (line-1) ps
   | getLineCol pos line [] = raise LexicalError ("",(0,0))

 fun lexerError lexbuf s = 
     raise LexicalError (s, getPos lexbuf)

 fun keyword (s, pos) =
     case s of
         "call"         => Parser.CALL pos
       | "uncall"       => Parser.UNCALL pos
       | "begin"        => Parser.BEGIN pos
       | "end"          => Parser.END pos
       | "read"         => Parser.READ pos
       | "write"        => Parser.WRITE pos
       | "test"         => Parser.TEST pos
       | "assert"       => Parser.ASSERT pos
       | "skip"         => Parser.SKIP pos
       | "timer"        => Parser.TIMER pos
       | "M"            => Parser.M pos
       | "includeC"     => Parser.INCLUDEC pos
       | _              => Parser.ID (s, pos)

 
fun action_31 lexbuf = (
 lexerError lexbuf "Illegal symbol in input" )
and action_30 lexbuf = (
 Parser.EOF (getPos lexbuf) )
and action_29 lexbuf = (
 Parser.SEMICOLON (getPos lexbuf) )
and action_28 lexbuf = (
 Parser.RBRACK (getPos lexbuf) )
and action_27 lexbuf = (
 Parser.LBRACK (getPos lexbuf) )
and action_26 lexbuf = (
 Parser.LAND (getPos lexbuf) )
and action_25 lexbuf = (
 Parser.SWAP (getPos lexbuf) )
and action_24 lexbuf = (
 Parser.LARROW (getPos lexbuf) )
and action_23 lexbuf = (
 Parser.RARROW (getPos lexbuf) )
and action_22 lexbuf = (
 Parser.GEQ (getPos lexbuf) )
and action_21 lexbuf = (
 Parser.LEQ (getPos lexbuf) )
and action_20 lexbuf = (
 Parser.NEQ (getPos lexbuf) )
and action_19 lexbuf = (
 Parser.GREATER (getPos lexbuf) )
and action_18 lexbuf = (
 Parser.LESS (getPos lexbuf) )
and action_17 lexbuf = (
 Parser.EQUAL (getPos lexbuf) )
and action_16 lexbuf = (
 Parser.XORWITH (getPos lexbuf) )
and action_15 lexbuf = (
 Parser.SUB (getPos lexbuf) )
and action_14 lexbuf = (
 Parser.ADD (getPos lexbuf) )
and action_13 lexbuf = (
 Parser.SHIFTR (getPos lexbuf) )
and action_12 lexbuf = (
 Parser.SHIFTL (getPos lexbuf) )
and action_11 lexbuf = (
 Parser.BOR (getPos lexbuf) )
and action_10 lexbuf = (
 Parser.NAND (getPos lexbuf) )
and action_9 lexbuf = (
 Parser.BAND (getPos lexbuf) )
and action_8 lexbuf = (
 Parser.XOR (getPos lexbuf) )
and action_7 lexbuf = (
 Parser.MINUS (getPos lexbuf) )
and action_6 lexbuf = (
 Parser.PLUS (getPos lexbuf) )
and action_5 lexbuf = (
 Parser.STRINGCONST
                            ((case String.fromCString (getLexeme lexbuf) of
                               NONE => lexerError lexbuf "Bad string constant"
                             | SOME s => String.substring(s,1,
                                                          String.size s - 2)),
                             getPos lexbuf) )
and action_4 lexbuf = (
 keyword (getLexeme lexbuf,getPos lexbuf) )
and action_3 lexbuf = (
 case Int.fromString (getLexeme lexbuf) of
                               NONE   => lexerError lexbuf "Bad integer"
                             | SOME i => Parser.NUM (i, getPos lexbuf) )
and action_2 lexbuf = (
 currentLine := !currentLine+1;
                          lineStartPos :=  getLexemeStart lexbuf
			                   :: !lineStartPos;
                          Token lexbuf )
and action_1 lexbuf = (
 Token lexbuf )
and action_0 lexbuf = (
 Token lexbuf )
and state_0 lexbuf = (
 let val currChar = getNextChar lexbuf in
 if currChar >= #"A" andalso currChar <= #"Z" then  state_16 lexbuf
 else if currChar >= #"a" andalso currChar <= #"z" then  state_16 lexbuf
 else if currChar >= #"0" andalso currChar <= #"9" then  state_11 lexbuf
 else case currChar of
    #"\t" => state_3 lexbuf
 |  #"\r" => state_3 lexbuf
 |  #" " => state_3 lexbuf
 |  #"\n" => action_2 lexbuf
 |  #"\f" => action_2 lexbuf
 |  #"|" => action_11 lexbuf
 |  #"^" => state_19 lexbuf
 |  #"]" => action_28 lexbuf
 |  #"[" => action_27 lexbuf
 |  #">" => state_15 lexbuf
 |  #"=" => state_14 lexbuf
 |  #"<" => state_13 lexbuf
 |  #";" => action_29 lexbuf
 |  #"/" => state_10 lexbuf
 |  #"-" => state_9 lexbuf
 |  #"+" => state_8 lexbuf
 |  #"&" => state_7 lexbuf
 |  #"\"" => state_6 lexbuf
 |  #"!" => state_5 lexbuf
 |  #"\^@" => action_30 lexbuf
 |  _ => action_31 lexbuf
 end)
and state_3 lexbuf = (
 setLexLastPos lexbuf (getLexCurrPos lexbuf);
 setLexLastAction lexbuf (magic action_0);
 let val currChar = getNextChar lexbuf in
 case currChar of
    #"\t" => state_43 lexbuf
 |  #"\r" => state_43 lexbuf
 |  #" " => state_43 lexbuf
 |  _ => backtrack lexbuf
 end)
and state_5 lexbuf = (
 setLexLastPos lexbuf (getLexCurrPos lexbuf);
 setLexLastAction lexbuf (magic action_31);
 let val currChar = getNextChar lexbuf in
 case currChar of
    #"=" => action_20 lexbuf
 |  #"&" => action_10 lexbuf
 |  _ => backtrack lexbuf
 end)
and state_6 lexbuf = (
 setLexLastPos lexbuf (getLexCurrPos lexbuf);
 setLexLastAction lexbuf (magic action_31);
 let val currChar = getNextChar lexbuf in
 if currChar >= #"(" andalso currChar <= #"[" then  state_38 lexbuf
 else if currChar >= #"]" andalso currChar <= #"~" then  state_38 lexbuf
 else case currChar of
    #"!" => state_38 lexbuf
 |  #" " => state_38 lexbuf
 |  #"&" => state_38 lexbuf
 |  #"%" => state_38 lexbuf
 |  #"$" => state_38 lexbuf
 |  #"#" => state_38 lexbuf
 |  #"\\" => state_40 lexbuf
 |  #"\"" => action_5 lexbuf
 |  _ => backtrack lexbuf
 end)
and state_7 lexbuf = (
 setLexLastPos lexbuf (getLexCurrPos lexbuf);
 setLexLastAction lexbuf (magic action_9);
 let val currChar = getNextChar lexbuf in
 case currChar of
    #"&" => action_26 lexbuf
 |  _ => backtrack lexbuf
 end)
and state_8 lexbuf = (
 setLexLastPos lexbuf (getLexCurrPos lexbuf);
 setLexLastAction lexbuf (magic action_6);
 let val currChar = getNextChar lexbuf in
 case currChar of
    #"=" => action_14 lexbuf
 |  _ => backtrack lexbuf
 end)
and state_9 lexbuf = (
 setLexLastPos lexbuf (getLexCurrPos lexbuf);
 setLexLastAction lexbuf (magic action_7);
 let val currChar = getNextChar lexbuf in
 case currChar of
    #"=" => action_15 lexbuf
 |  #"-" => state_33 lexbuf
 |  _ => backtrack lexbuf
 end)
and state_10 lexbuf = (
 setLexLastPos lexbuf (getLexCurrPos lexbuf);
 setLexLastAction lexbuf (magic action_31);
 let val currChar = getNextChar lexbuf in
 case currChar of
    #"/" => state_32 lexbuf
 |  _ => backtrack lexbuf
 end)
and state_11 lexbuf = (
 setLexLastPos lexbuf (getLexCurrPos lexbuf);
 setLexLastAction lexbuf (magic action_3);
 let val currChar = getNextChar lexbuf in
 if currChar >= #"0" andalso currChar <= #"9" then  state_31 lexbuf
 else backtrack lexbuf
 end)
and state_13 lexbuf = (
 setLexLastPos lexbuf (getLexCurrPos lexbuf);
 setLexLastAction lexbuf (magic action_18);
 let val currChar = getNextChar lexbuf in
 case currChar of
    #"=" => action_21 lexbuf
 |  #"<" => action_12 lexbuf
 |  #"-" => state_26 lexbuf
 |  _ => backtrack lexbuf
 end)
and state_14 lexbuf = (
 setLexLastPos lexbuf (getLexCurrPos lexbuf);
 setLexLastAction lexbuf (magic action_31);
 let val currChar = getNextChar lexbuf in
 case currChar of
    #"=" => action_17 lexbuf
 |  _ => backtrack lexbuf
 end)
and state_15 lexbuf = (
 setLexLastPos lexbuf (getLexCurrPos lexbuf);
 setLexLastAction lexbuf (magic action_19);
 let val currChar = getNextChar lexbuf in
 case currChar of
    #">" => action_13 lexbuf
 |  #"=" => action_22 lexbuf
 |  _ => backtrack lexbuf
 end)
and state_16 lexbuf = (
 setLexLastPos lexbuf (getLexCurrPos lexbuf);
 setLexLastAction lexbuf (magic action_4);
 let val currChar = getNextChar lexbuf in
 if currChar >= #"0" andalso currChar <= #"9" then  state_22 lexbuf
 else if currChar >= #"A" andalso currChar <= #"Z" then  state_22 lexbuf
 else if currChar >= #"a" andalso currChar <= #"z" then  state_22 lexbuf
 else case currChar of
    #"_" => state_22 lexbuf
 |  _ => backtrack lexbuf
 end)
and state_19 lexbuf = (
 setLexLastPos lexbuf (getLexCurrPos lexbuf);
 setLexLastAction lexbuf (magic action_8);
 let val currChar = getNextChar lexbuf in
 case currChar of
    #"=" => action_16 lexbuf
 |  _ => backtrack lexbuf
 end)
and state_22 lexbuf = (
 setLexLastPos lexbuf (getLexCurrPos lexbuf);
 setLexLastAction lexbuf (magic action_4);
 let val currChar = getNextChar lexbuf in
 if currChar >= #"0" andalso currChar <= #"9" then  state_22 lexbuf
 else if currChar >= #"A" andalso currChar <= #"Z" then  state_22 lexbuf
 else if currChar >= #"a" andalso currChar <= #"z" then  state_22 lexbuf
 else case currChar of
    #"_" => state_22 lexbuf
 |  _ => backtrack lexbuf
 end)
and state_26 lexbuf = (
 let val currChar = getNextChar lexbuf in
 case currChar of
    #">" => action_25 lexbuf
 |  #"-" => action_24 lexbuf
 |  _ => backtrack lexbuf
 end)
and state_31 lexbuf = (
 setLexLastPos lexbuf (getLexCurrPos lexbuf);
 setLexLastAction lexbuf (magic action_3);
 let val currChar = getNextChar lexbuf in
 if currChar >= #"0" andalso currChar <= #"9" then  state_31 lexbuf
 else backtrack lexbuf
 end)
and state_32 lexbuf = (
 setLexLastPos lexbuf (getLexCurrPos lexbuf);
 setLexLastAction lexbuf (magic action_1);
 let val currChar = getNextChar lexbuf in
 case currChar of
    #"\^@" => backtrack lexbuf
 |  #"\n" => backtrack lexbuf
 |  _ => state_32 lexbuf
 end)
and state_33 lexbuf = (
 let val currChar = getNextChar lexbuf in
 case currChar of
    #">" => action_23 lexbuf
 |  _ => backtrack lexbuf
 end)
and state_38 lexbuf = (
 let val currChar = getNextChar lexbuf in
 if currChar >= #"(" andalso currChar <= #"[" then  state_38 lexbuf
 else if currChar >= #"]" andalso currChar <= #"~" then  state_38 lexbuf
 else case currChar of
    #"!" => state_38 lexbuf
 |  #" " => state_38 lexbuf
 |  #"&" => state_38 lexbuf
 |  #"%" => state_38 lexbuf
 |  #"$" => state_38 lexbuf
 |  #"#" => state_38 lexbuf
 |  #"\\" => state_40 lexbuf
 |  #"\"" => action_5 lexbuf
 |  _ => backtrack lexbuf
 end)
and state_40 lexbuf = (
 let val currChar = getNextChar lexbuf in
 if currChar >= #" " andalso currChar <= #"~" then  state_38 lexbuf
 else backtrack lexbuf
 end)
and state_43 lexbuf = (
 setLexLastPos lexbuf (getLexCurrPos lexbuf);
 setLexLastAction lexbuf (magic action_0);
 let val currChar = getNextChar lexbuf in
 case currChar of
    #"\t" => state_43 lexbuf
 |  #"\r" => state_43 lexbuf
 |  #" " => state_43 lexbuf
 |  _ => backtrack lexbuf
 end)
and Token lexbuf =
  (setLexLastAction lexbuf (magic dummyAction);
   setLexStartPos lexbuf (getLexCurrPos lexbuf);
   state_0 lexbuf)

(* The following checks type consistency of actions *)
val _ = fn _ => [action_31, action_30, action_29, action_28, action_27, action_26, action_25, action_24, action_23, action_22, action_21, action_20, action_19, action_18, action_17, action_16, action_15, action_14, action_13, action_12, action_11, action_10, action_9, action_8, action_7, action_6, action_5, action_4, action_3, action_2, action_1, action_0];

end
