{
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

 }

rule Token = parse
    [` ` `\t` `\r`]+    { Token lexbuf } (* whitespace *)
    | "//" [^`\n`]*	{ Token lexbuf } (* comment *)
  | [`\n` `\012`]       { currentLine := !currentLine+1;
                          lineStartPos :=  getLexemeStart lexbuf
			                   :: !lineStartPos;
                          Token lexbuf } (* newlines *)
  | [`0`-`9`]+          { case Int.fromString (getLexeme lexbuf) of
                               NONE   => lexerError lexbuf "Bad integer"
                             | SOME i => Parser.NUM (i, getPos lexbuf) }
  | [`a`-`z``A`-`Z`] [`a`-`z``A`-`Z``0`-`9``_`]*
                        { keyword (getLexeme lexbuf,getPos lexbuf) }
  | `"` ([` ` `!` `#`-`&` `(`-`[` `]`-`~`] | `\`[` `-`~`])* `"`
                        { Parser.STRINGCONST
                            ((case String.fromCString (getLexeme lexbuf) of
                               NONE => lexerError lexbuf "Bad string constant"
                             | SOME s => String.substring(s,1,
                                                          String.size s - 2)),
                             getPos lexbuf) }

  | `+`                 { Parser.PLUS (getPos lexbuf) }
  | `-`                 { Parser.MINUS (getPos lexbuf) }
  | `^`                 { Parser.XOR (getPos lexbuf) }
  | `&`                 { Parser.BAND (getPos lexbuf) }
  | "!&"                { Parser.NAND (getPos lexbuf) }
  | `|`                 { Parser.BOR (getPos lexbuf) }
  | "<<"                { Parser.SHIFTL (getPos lexbuf) }
  | ">>"                { Parser.SHIFTR (getPos lexbuf) }
  | "+="                { Parser.ADD (getPos lexbuf) }
  | "-="                { Parser.SUB (getPos lexbuf) }
  | "^="                { Parser.XORWITH (getPos lexbuf) }
  | "=="                { Parser.EQUAL (getPos lexbuf) }
  | `<`                 { Parser.LESS (getPos lexbuf) }
  | `>`                 { Parser.GREATER (getPos lexbuf) }
  | "!="                { Parser.NEQ (getPos lexbuf) }
  | "<="                { Parser.LEQ (getPos lexbuf) }
  | ">="                { Parser.GEQ (getPos lexbuf) }
  | "-->"               { Parser.RARROW (getPos lexbuf) }
  | "<--"               { Parser.LARROW (getPos lexbuf) }
  | "<->"               { Parser.SWAP (getPos lexbuf) }
  | "&&"                { Parser.LAND (getPos lexbuf) }
  | `[`                 { Parser.LBRACK (getPos lexbuf) }
  | `]`                 { Parser.RBRACK (getPos lexbuf) }
  | `;`                 { Parser.SEMICOLON (getPos lexbuf) }
  | eof                 { Parser.EOF (getPos lexbuf) }
  | _                   { lexerError lexbuf "Illegal symbol in input" }

;
