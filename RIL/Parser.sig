local
type t__1__ = (int*int)
type t__2__ = (int*int)
type t__3__ = (int*int)
type t__4__ = (int*int)
type t__5__ = (int*int)
type t__6__ = (int*int)
type t__7__ = (int*int)
type t__8__ = (int*int)
type t__9__ = (int*int)
type t__10__ = (int*int)
type t__11__ = (int*int)
type t__12__ = string*(int*int)
type t__13__ = (int*int)
type t__14__ = (int*int)
type t__15__ = (int*int)
type t__16__ = (int*int)
type t__17__ = (int*int)
type t__18__ = (int*int)
type t__19__ = (int*int)
type t__20__ = (int*int)
type t__21__ = (int*int)
type t__22__ = (int*int)
type t__23__ = int*(int*int)
type t__24__ = (int*int)
type t__25__ = (int*int)
type t__26__ = (int*int)
type t__27__ = (int*int)
type t__28__ = (int*int)
type t__29__ = (int*int)
type t__30__ = (int*int)
type t__31__ = (int*int)
type t__32__ = string*(int*int)
type t__33__ = (int*int)
type t__34__ = (int*int)
type t__35__ = (int*int)
type t__36__ = (int*int)
type t__37__ = (int*int)
type t__38__ = (int*int)
type t__39__ = (int*int)
type t__40__ = (int*int)
in
datatype token =
    ADD of t__1__
  | ASSERT of t__2__
  | BAND of t__3__
  | BEGIN of t__4__
  | BOR of t__5__
  | CALL of t__6__
  | END of t__7__
  | EOF of t__8__
  | EQUAL of t__9__
  | GEQ of t__10__
  | GREATER of t__11__
  | ID of t__12__
  | INCLUDEC of t__13__
  | LAND of t__14__
  | LARROW of t__15__
  | LBRACK of t__16__
  | LEQ of t__17__
  | LESS of t__18__
  | M of t__19__
  | MINUS of t__20__
  | NAND of t__21__
  | NEQ of t__22__
  | NUM of t__23__
  | PLUS of t__24__
  | RARROW of t__25__
  | RBRACK of t__26__
  | READ of t__27__
  | SEMICOLON of t__28__
  | SHIFTL of t__29__
  | SHIFTR of t__30__
  | SKIP of t__31__
  | STRINGCONST of t__32__
  | SUB of t__33__
  | SWAP of t__34__
  | TEST of t__35__
  | TIMER of t__36__
  | UNCALL of t__37__
  | WRITE of t__38__
  | XOR of t__39__
  | XORWITH of t__40__
end;

val Prog :
  (Lexing.lexbuf -> token) -> Lexing.lexbuf -> RIL.prog;
