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

open Obj Parsing;
prim_val vector_ : int -> 'a -> 'a Vector.vector = 2 "make_vect";
prim_val update_ : 'a Vector.vector -> int -> 'a -> unit = 3 "set_vect_item";

val yytransl = #[
  257 (* ADD *),
  258 (* ASSERT *),
  259 (* BAND *),
  260 (* BEGIN *),
  261 (* BOR *),
  262 (* CALL *),
  263 (* END *),
  264 (* EOF *),
  265 (* EQUAL *),
  266 (* GEQ *),
  267 (* GREATER *),
  268 (* ID *),
  269 (* INCLUDEC *),
  270 (* LAND *),
  271 (* LARROW *),
  272 (* LBRACK *),
  273 (* LEQ *),
  274 (* LESS *),
  275 (* M *),
  276 (* MINUS *),
  277 (* NAND *),
  278 (* NEQ *),
  279 (* NUM *),
  280 (* PLUS *),
  281 (* RARROW *),
  282 (* RBRACK *),
  283 (* READ *),
  284 (* SEMICOLON *),
  285 (* SHIFTL *),
  286 (* SHIFTR *),
  287 (* SKIP *),
  288 (* STRINGCONST *),
  289 (* SUB *),
  290 (* SWAP *),
  291 (* TEST *),
  292 (* TIMER *),
  293 (* UNCALL *),
  294 (* WRITE *),
  295 (* XOR *),
  296 (* XORWITH *),
    0];

val yylhs = "\255\255\
\\002\000\002\000\003\000\003\000\004\000\004\000\005\000\005\000\
\\005\000\006\000\006\000\006\000\006\000\006\000\006\000\006\000\
\\007\000\007\000\007\000\007\000\007\000\007\000\007\000\007\000\
\\008\000\009\000\009\000\010\000\010\000\010\000\011\000\011\000\
\\011\000\012\000\012\000\012\000\012\000\012\000\012\000\012\000\
\\012\000\012\000\012\000\012\000\012\000\012\000\012\000\012\000\
\\013\000\014\000\014\000\001\000\000\000";

val yylen = "\002\000\
\\001\000\004\000\001\000\001\000\000\000\002\000\001\000\001\000\
\\001\000\001\000\001\000\001\000\001\000\001\000\001\000\001\000\
\\001\000\001\000\001\000\001\000\001\000\001\000\001\000\001\000\
\\003\000\001\000\003\000\002\000\002\000\005\000\002\000\002\000\
\\005\000\005\000\003\000\003\000\002\000\002\000\002\000\002\000\
\\002\000\003\000\002\000\003\000\003\000\003\000\001\000\001\000\
\\003\000\001\000\002\000\001\000\002\000";

val yydefred = "\000\000\
\\000\000\000\000\000\000\050\000\000\000\053\000\000\000\000\000\
\\052\000\028\000\029\000\000\000\000\000\000\000\000\000\000\000\
\\000\000\000\000\047\000\000\000\048\000\000\000\000\000\000\000\
\\000\000\000\000\051\000\000\000\001\000\000\000\000\000\039\000\
\\037\000\000\000\043\000\000\000\040\000\004\000\003\000\000\000\
\\000\000\038\000\041\000\007\000\023\000\017\000\022\000\019\000\
\\021\000\018\000\024\000\020\000\008\000\000\000\009\000\000\000\
\\000\000\000\000\000\000\000\000\000\000\000\000\049\000\000\000\
\\000\000\046\000\000\000\006\000\042\000\036\000\000\000\025\000\
\\045\000\031\000\032\000\000\000\000\000\030\000\027\000\002\000\
\\013\000\014\000\011\000\010\000\015\000\016\000\012\000\000\000\
\\000\000\034\000\000\000\033\000";

val yydgoto = "\002\000\
\\006\000\030\000\040\000\041\000\056\000\088\000\057\000\025\000\
\\032\000\007\000\063\000\026\000\008\000\009\000";

val yysindex = "\008\000\
\\022\255\000\000\000\255\000\000\248\254\000\000\098\255\022\255\
\\000\000\000\000\000\000\006\255\254\254\013\255\016\255\004\255\
\\024\255\254\254\000\000\023\255\000\000\029\255\254\254\054\255\
\\018\255\252\254\000\000\036\255\000\000\121\255\030\255\000\000\
\\000\000\254\254\000\000\046\255\000\000\000\000\000\000\023\255\
\\027\255\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
\\000\000\000\000\000\000\000\000\000\000\254\254\000\000\023\255\
\\023\255\048\255\050\255\055\255\098\255\041\255\000\000\254\254\
\\254\254\000\000\043\255\000\000\000\000\000\000\255\254\000\000\
\\000\000\000\000\000\000\000\000\058\255\000\000\000\000\000\000\
\\000\000\000\000\000\000\000\000\000\000\000\000\000\000\023\255\
\\045\255\000\000\066\255\000\000";

val yyrindex = "\000\000\
\\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
\\000\000\000\000\000\000\000\000\000\000\000\000\081\255\000\000\
\\000\000\000\000\000\000\047\255\000\000\000\000\000\000\000\000\
\\000\000\000\000\000\000\000\000\000\000\000\000\020\255\000\000\
\\000\000\000\000\000\000\000\000\000\000\000\000\000\000\047\255\
\\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
\\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
\\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
\\000\000\000\000\000\000\000\000\000\000\000\000\049\255\000\000\
\\000\000\000\000\000\000\094\255\000\000\000\000\000\000\000\000\
\\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
\\000\000\000\000\000\000\000\000";

val yygindex = "\000\000\
\\000\000\249\255\205\255\040\000\000\000\000\000\000\000\244\255\
\\018\000\000\000\000\000\024\000\000\000\078\000";

val YYTABLESIZE = 143;
val yytable = "\024\000\
\\031\000\081\000\059\000\082\000\071\000\072\000\011\000\029\000\
\\001\000\029\000\037\000\010\000\039\000\062\000\017\000\043\000\
\\017\000\028\000\083\000\012\000\060\000\066\000\084\000\061\000\
\\033\000\003\000\026\000\085\000\086\000\004\000\034\000\026\000\
\\039\000\005\000\029\000\035\000\090\000\087\000\026\000\036\000\
\\042\000\017\000\058\000\065\000\026\000\038\000\070\000\026\000\
\\039\000\039\000\064\000\078\000\031\000\024\000\044\000\035\000\
\\045\000\067\000\069\000\073\000\035\000\074\000\046\000\047\000\
\\048\000\077\000\075\000\035\000\080\000\089\000\049\000\050\000\
\\091\000\035\000\051\000\052\000\035\000\092\000\005\000\068\000\
\\039\000\001\000\079\000\001\000\076\000\027\000\053\000\054\000\
\\000\000\001\000\001\000\001\000\000\000\055\000\000\000\000\000\
\\000\000\001\000\001\000\013\000\044\000\001\000\001\000\014\000\
\\000\000\044\000\000\000\000\000\000\000\015\000\016\000\000\000\
\\044\000\001\000\001\000\000\000\017\000\000\000\044\000\000\000\
\\001\000\044\000\000\000\045\000\018\000\000\000\000\000\000\000\
\\019\000\046\000\047\000\048\000\020\000\021\000\022\000\023\000\
\\000\000\049\000\050\000\000\000\000\000\051\000\052\000";

val yycheck = "\007\000\
\\013\000\003\001\007\001\005\001\056\000\057\000\015\001\012\001\
\\001\000\012\001\018\000\012\001\020\000\026\000\019\001\023\000\
\\019\001\012\001\020\001\028\001\025\001\034\000\024\001\028\001\
\\012\001\004\001\007\001\029\001\030\001\008\001\015\001\012\001\
\\040\000\012\001\012\001\032\001\088\000\039\001\019\001\016\001\
\\012\001\019\001\025\001\014\001\025\001\023\001\054\000\028\001\
\\056\000\057\000\015\001\064\000\065\000\061\000\001\001\007\001\
\\003\001\012\001\032\001\012\001\012\001\012\001\009\001\010\001\
\\011\001\025\001\012\001\019\001\026\001\012\001\017\001\018\001\
\\028\001\025\001\021\001\022\001\028\001\012\001\032\001\040\000\
\\088\000\001\001\065\000\003\001\061\000\008\000\033\001\034\001\
\\255\255\009\001\010\001\011\001\255\255\040\001\255\255\255\255\
\\255\255\017\001\018\001\002\001\007\001\021\001\022\001\006\001\
\\255\255\012\001\255\255\255\255\255\255\012\001\013\001\255\255\
\\019\001\033\001\034\001\255\255\019\001\255\255\025\001\255\255\
\\040\001\028\001\255\255\003\001\027\001\255\255\255\255\255\255\
\\031\001\009\001\010\001\011\001\035\001\036\001\037\001\038\001\
\\255\255\017\001\018\001\255\255\255\255\021\001\022\001";

val yyact = vector_ 54 (fn () => ((raise Fail "parser") : obj));
(* Rule 1, file Parser.grm, line 30 *)
val _ = update_ yyact 1
(fn () => repr(let
val d__1__ = peekVal 0 : string*(int*int)
in
( RIL.Var (d__1__) ) end : RIL.lVal))
;
(* Rule 2, file Parser.grm, line 32 *)
val _ = update_ yyact 2
(fn () => repr(let
val d__1__ = peekVal 3 : (int*int)
val d__2__ = peekVal 2 : (int*int)
val d__3__ = peekVal 1 : string*(int*int)
val d__4__ = peekVal 0 : (int*int)
in
( RIL.Mem (d__3__) ) end : RIL.lVal))
;
(* Rule 3, file Parser.grm, line 35 *)
val _ = update_ yyact 3
(fn () => repr(let
val d__1__ = peekVal 0 : RIL.lVal
in
( RIL.L (d__1__) ) end : RIL.rVal))
;
(* Rule 4, file Parser.grm, line 36 *)
val _ = update_ yyact 4
(fn () => repr(let
val d__1__ = peekVal 0 : int*(int*int)
in
( RIL.Const (d__1__) ) end : RIL.rVal))
;
(* Rule 5, file Parser.grm, line 39 *)
val _ = update_ yyact 5
(fn () => repr(let
in
( [] ) end : RIL.rVal list))
;
(* Rule 6, file Parser.grm, line 41 *)
val _ = update_ yyact 6
(fn () => repr(let
val d__1__ = peekVal 1 : RIL.rVal
val d__2__ = peekVal 0 : RIL.rVal list
in
( (d__1__) :: (d__2__) ) end : RIL.rVal list))
;
(* Rule 7, file Parser.grm, line 44 *)
val _ = update_ yyact 7
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( (RIL.Add, (d__1__)) ) end : RIL.updateOp * (int * int)))
;
(* Rule 8, file Parser.grm, line 45 *)
val _ = update_ yyact 8
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( (RIL.Sub, (d__1__)) ) end : RIL.updateOp * (int * int)))
;
(* Rule 9, file Parser.grm, line 46 *)
val _ = update_ yyact 9
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( (RIL.XorWith, (d__1__)) ) end : RIL.updateOp * (int * int)))
;
(* Rule 10, file Parser.grm, line 49 *)
val _ = update_ yyact 10
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( RIL.Plus ) end : RIL.arithOp))
;
(* Rule 11, file Parser.grm, line 50 *)
val _ = update_ yyact 11
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( RIL.Minus ) end : RIL.arithOp))
;
(* Rule 12, file Parser.grm, line 51 *)
val _ = update_ yyact 12
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( RIL.Xor ) end : RIL.arithOp))
;
(* Rule 13, file Parser.grm, line 52 *)
val _ = update_ yyact 13
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( RIL.And ) end : RIL.arithOp))
;
(* Rule 14, file Parser.grm, line 53 *)
val _ = update_ yyact 14
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( RIL.Or ) end : RIL.arithOp))
;
(* Rule 15, file Parser.grm, line 54 *)
val _ = update_ yyact 15
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( RIL.ShiftL ) end : RIL.arithOp))
;
(* Rule 16, file Parser.grm, line 55 *)
val _ = update_ yyact 16
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( RIL.ShiftR ) end : RIL.arithOp))
;
(* Rule 17, file Parser.grm, line 58 *)
val _ = update_ yyact 17
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( RIL.Equal ) end : RIL.relOp))
;
(* Rule 18, file Parser.grm, line 59 *)
val _ = update_ yyact 18
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( RIL.Less ) end : RIL.relOp))
;
(* Rule 19, file Parser.grm, line 60 *)
val _ = update_ yyact 19
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( RIL.Greater ) end : RIL.relOp))
;
(* Rule 20, file Parser.grm, line 61 *)
val _ = update_ yyact 20
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( RIL.Neq ) end : RIL.relOp))
;
(* Rule 21, file Parser.grm, line 62 *)
val _ = update_ yyact 21
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( RIL.Leq ) end : RIL.relOp))
;
(* Rule 22, file Parser.grm, line 63 *)
val _ = update_ yyact 22
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( RIL.Geq ) end : RIL.relOp))
;
(* Rule 23, file Parser.grm, line 64 *)
val _ = update_ yyact 23
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( RIL.IfAnd ) end : RIL.relOp))
;
(* Rule 24, file Parser.grm, line 65 *)
val _ = update_ yyact 24
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( RIL.IfNand ) end : RIL.relOp))
;
(* Rule 25, file Parser.grm, line 69 *)
val _ = update_ yyact 25
(fn () => repr(let
val d__1__ = peekVal 2 : RIL.lVal
val d__2__ = peekVal 1 : RIL.relOp
val d__3__ = peekVal 0 : RIL.rVal
in
( ((d__1__), (d__2__), (d__3__)) ) end : RIL.cond))
;
(* Rule 26, file Parser.grm, line 72 *)
val _ = update_ yyact 26
(fn () => repr(let
val d__1__ = peekVal 0 : RIL.cond
in
( [(d__1__)] ) end : RIL.cond list))
;
(* Rule 27, file Parser.grm, line 74 *)
val _ = update_ yyact 27
(fn () => repr(let
val d__1__ = peekVal 2 : RIL.cond
val d__2__ = peekVal 1 : (int*int)
val d__3__ = peekVal 0 : RIL.cond list
in
( (d__1__) :: (d__3__) ) end : RIL.cond list))
;
(* Rule 28, file Parser.grm, line 77 *)
val _ = update_ yyact 28
(fn () => repr(let
val d__1__ = peekVal 1 : (int*int)
val d__2__ = peekVal 0 : string*(int*int)
in
( RIL.Begin (d__2__) ) end : RIL.entry))
;
(* Rule 29, file Parser.grm, line 78 *)
val _ = update_ yyact 29
(fn () => repr(let
val d__1__ = peekVal 1 : string*(int*int)
val d__2__ = peekVal 0 : (int*int)
in
( RIL.Label (d__1__) ) end : RIL.entry))
;
(* Rule 30, file Parser.grm, line 80 *)
val _ = update_ yyact 30
(fn () => repr(let
val d__1__ = peekVal 4 : string*(int*int)
val d__2__ = peekVal 3 : (int*int)
val d__3__ = peekVal 2 : string*(int*int)
val d__4__ = peekVal 1 : (int*int)
val d__5__ = peekVal 0 : RIL.cond
in
( RIL.Join ((d__5__), #1 (d__1__), #1 (d__3__), (d__4__)) ) end : RIL.entry))
;
(* Rule 31, file Parser.grm, line 83 *)
val _ = update_ yyact 31
(fn () => repr(let
val d__1__ = peekVal 1 : (int*int)
val d__2__ = peekVal 0 : string*(int*int)
in
( RIL.End (d__2__) ) end : RIL.exit))
;
(* Rule 32, file Parser.grm, line 84 *)
val _ = update_ yyact 32
(fn () => repr(let
val d__1__ = peekVal 1 : (int*int)
val d__2__ = peekVal 0 : string*(int*int)
in
( RIL.Goto (d__2__) ) end : RIL.exit))
;
(* Rule 33, file Parser.grm, line 86 *)
val _ = update_ yyact 33
(fn () => repr(let
val d__1__ = peekVal 4 : RIL.cond
val d__2__ = peekVal 3 : (int*int)
val d__3__ = peekVal 2 : string*(int*int)
val d__4__ = peekVal 1 : (int*int)
val d__5__ = peekVal 0 : string*(int*int)
in
( RIL.Split ((d__1__), #1 (d__3__), #1 (d__5__), (d__2__)) ) end : RIL.exit))
;
(* Rule 34, file Parser.grm, line 90 *)
val _ = update_ yyact 34
(fn () => repr(let
val d__1__ = peekVal 4 : RIL.lVal
val d__2__ = peekVal 3 : RIL.updateOp * (int * int)
val d__3__ = peekVal 2 : RIL.rVal
val d__4__ = peekVal 1 : RIL.arithOp
val d__5__ = peekVal 0 : RIL.rVal
in
( fn (en,ex) =>
                         [(en,
                           RIL.Update ((d__1__), #1 (d__2__), (d__3__), (d__4__), (d__5__), #2 (d__2__)),
                           ex)] ) end : RIL.entry * RIL.exit -> RIL.block list))
;
(* Rule 35, file Parser.grm, line 95 *)
val _ = update_ yyact 35
(fn () => repr(let
val d__1__ = peekVal 2 : RIL.lVal
val d__2__ = peekVal 1 : RIL.updateOp * (int * int)
val d__3__ = peekVal 0 : RIL.rVal
in
( fn (en,ex) =>
                         [(en,
                           RIL.Update ((d__1__), #1 (d__2__), (d__3__), RIL.Plus,
                                       RIL.Const (0, (0, 0)), #2 (d__2__)),
                           ex)] ) end : RIL.entry * RIL.exit -> RIL.block list))
;
(* Rule 36, file Parser.grm, line 101 *)
val _ = update_ yyact 36
(fn () => repr(let
val d__1__ = peekVal 2 : RIL.lVal
val d__2__ = peekVal 1 : (int*int)
val d__3__ = peekVal 0 : RIL.lVal
in
( fn (en,ex) =>
                         [(en,
                           RIL.Swap ((d__1__), (d__3__), (d__2__)),
                           ex)] ) end : RIL.entry * RIL.exit -> RIL.block list))
;
(* Rule 37, file Parser.grm, line 106 *)
val _ = update_ yyact 37
(fn () => repr(let
val d__1__ = peekVal 1 : (int*int)
val d__2__ = peekVal 0 : string*(int*int)
in
( fn (en,ex) =>
                         [(en,
                           RIL.Call (d__2__),
                           ex)] ) end : RIL.entry * RIL.exit -> RIL.block list))
;
(* Rule 38, file Parser.grm, line 111 *)
val _ = update_ yyact 38
(fn () => repr(let
val d__1__ = peekVal 1 : (int*int)
val d__2__ = peekVal 0 : string*(int*int)
in
( fn (en,ex) =>
                         [(en,
                           RIL.Uncall (d__2__),
                           ex)] ) end : RIL.entry * RIL.exit -> RIL.block list))
;
(* Rule 39, file Parser.grm, line 116 *)
val _ = update_ yyact 39
(fn () => repr(let
val d__1__ = peekVal 1 : (int*int)
val d__2__ = peekVal 0 : RIL.cond list
in
( fn (en,ex) =>
                         [(en,
                           RIL.Assert ((d__2__), (d__1__)),
                           ex)] ) end : RIL.entry * RIL.exit -> RIL.block list))
;
(* Rule 40, file Parser.grm, line 121 *)
val _ = update_ yyact 40
(fn () => repr(let
val d__1__ = peekVal 1 : (int*int)
val d__2__ = peekVal 0 : RIL.lVal
in
( fn (en,ex) =>
                         [(en,
                           RIL.Read ((d__2__), (d__1__)),
                           ex)] ) end : RIL.entry * RIL.exit -> RIL.block list))
;
(* Rule 41, file Parser.grm, line 126 *)
val _ = update_ yyact 41
(fn () => repr(let
val d__1__ = peekVal 1 : (int*int)
val d__2__ = peekVal 0 : RIL.lVal
in
( fn (en,ex) =>
                         [(en,
                           RIL.Write ((d__2__), (d__1__)) ,
                           ex)]) end : RIL.entry * RIL.exit -> RIL.block list))
;
(* Rule 42, file Parser.grm, line 131 *)
val _ = update_ yyact 42
(fn () => repr(let
val d__1__ = peekVal 2 : (int*int)
val d__2__ = peekVal 1 : RIL.rVal list
val d__3__ = peekVal 0 : string*(int*int)
in
( fn (en,ex) =>
                         [(en,
                           RIL.Test (#1 (d__3__), (d__2__), (d__1__)) ,
                           ex)]) end : RIL.entry * RIL.exit -> RIL.block list))
;
(* Rule 43, file Parser.grm, line 136 *)
val _ = update_ yyact 43
(fn () => repr(let
val d__1__ = peekVal 1 : (int*int)
val d__2__ = peekVal 0 : string*(int*int)
in
( fn (en,ex) =>
                         [(en,
                           RIL.IncludeC (#1 (d__2__), (d__1__)) ,
                           ex)]) end : RIL.entry * RIL.exit -> RIL.block list))
;
(* Rule 44, file Parser.grm, line 141 *)
val _ = update_ yyact 44
(fn () => repr(let
val d__1__ = peekVal 2 : RIL.entry * RIL.exit -> RIL.block list
val d__2__ = peekVal 1 : (int*int)
val d__3__ = peekVal 0 : RIL.entry * RIL.exit -> RIL.block list
in
( let
                        val lab = "dummy"
                      in
                        fn (en,ex) =>
                          let
                            val bs1 =
                                (d__1__) (en, RIL.Goto (lab, (d__2__)))
                            val bs2 =
                                (d__3__) (RIL.Label (lab, (d__2__)), ex)
                            val ([(en1,inst1,ex1)], bs1') =
                                List.partition
                                    (fn (en,i,RIL.Goto (l,p)) => l = lab
                                      | _ => false)
                                    bs1
                            val ([(en2,inst2,ex2)], bs2') =
                                List.partition
                                    (fn (RIL.Label (l,p),i,ex) => l = lab
                                      | _ => false)
                                    bs2
                            val inst3 =
                                case (inst1, inst2) of
                                  (RIL.Skip, _) => inst2
                                | (_, RIL.Skip) => inst1
                                | _ => RIL.Semi (inst1, inst2, (d__2__))
                          in
                            bs1' @ [(en1, inst3, ex2)] @ bs2'
                          end
                      end ) end : RIL.entry * RIL.exit -> RIL.block list))
;
(* Rule 45, file Parser.grm, line 170 *)
val _ = update_ yyact 45
(fn () => repr(let
val d__1__ = peekVal 2 : RIL.cond
val d__2__ = peekVal 1 : (int*int)
val d__3__ = peekVal 0 : string*(int*int)
in
( let
                        val lab = "split_" ^ Int.toString (#1 (d__2__))
                                  ^ "_" ^ Int.toString (#2 (d__2__))
                      in
                        fn (en,ex) =>
                           [(en, RIL.Skip, RIL.Split ((d__1__), #1 (d__3__), lab, (d__2__))),
                            (RIL.Label (lab, (d__2__)), RIL.Skip, ex)]
                      end ) end : RIL.entry * RIL.exit -> RIL.block list))
;
(* Rule 46, file Parser.grm, line 179 *)
val _ = update_ yyact 46
(fn () => repr(let
val d__1__ = peekVal 2 : string*(int*int)
val d__2__ = peekVal 1 : (int*int)
val d__3__ = peekVal 0 : RIL.cond
in
( let
                        val lab = "join_" ^ Int.toString (#1 (d__2__))
                                  ^ "_" ^ Int.toString (#2 (d__2__))
                      in
                        fn (en,ex) =>
                           [(en, RIL.Skip, RIL.Goto (lab, (d__2__))),
                           (RIL.Join ((d__3__), #1 (d__1__), lab, (d__2__)), RIL.Skip, ex)]
                      end ) end : RIL.entry * RIL.exit -> RIL.block list))
;
(* Rule 47, file Parser.grm, line 187 *)
val _ = update_ yyact 47
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( fn (en,ex) => [(en, RIL.Skip, ex)] ) end : RIL.entry * RIL.exit -> RIL.block list))
;
(* Rule 48, file Parser.grm, line 188 *)
val _ = update_ yyact 48
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( fn (en,ex) => [(en, RIL.Timer, ex)] ) end : RIL.entry * RIL.exit -> RIL.block list))
;
(* Rule 49, file Parser.grm, line 192 *)
val _ = update_ yyact 49
(fn () => repr(let
val d__1__ = peekVal 2 : RIL.entry
val d__2__ = peekVal 1 : RIL.entry * RIL.exit -> RIL.block list
val d__3__ = peekVal 0 : RIL.exit
in
( (d__2__) ((d__1__), (d__3__)) ) end : RIL.block list))
;
(* Rule 50, file Parser.grm, line 195 *)
val _ = update_ yyact 50
(fn () => repr(let
val d__1__ = peekVal 0 : (int*int)
in
( [] ) end : RIL.block list))
;
(* Rule 51, file Parser.grm, line 196 *)
val _ = update_ yyact 51
(fn () => repr(let
val d__1__ = peekVal 1 : RIL.block list
val d__2__ = peekVal 0 : RIL.block list
in
( (d__1__) @ (d__2__) ) end : RIL.block list))
;
(* Rule 52, file Parser.grm, line 199 *)
val _ = update_ yyact 52
(fn () => repr(let
val d__1__ = peekVal 0 : RIL.block list
in
( let
                        val bs = (d__1__)
                        val (trivs, nontrivs) =
                            List.partition
                                (fn (RIL.Label _, RIL.Skip, RIL.Goto _) => true
                                  | _ => false)
                                bs
                        val table =
                            List.map
                                (fn (RIL.Label (en,_), _, RIL.Goto (ex,_)) =>
                                    (en,ex)
                                  | _ => raise Domain)
                                trivs
                        fun lookup x [] = x
                          | lookup x ((y,y1) :: t) =
                            if x=y then y1 else lookup x t
                        fun forward (en,i,ex) =
                            (en, i,
                             case ex of
                               RIL.Goto (l,pos) =>
                                 RIL.Goto (lookup l table,pos)
                             | RIL.Split (c,l1,l2,pos) => 
                                 RIL.Split (c,lookup l1 table,
                                            lookup l2 table, pos)
                             | _ => ex)
                      in
                        List.map forward nontrivs
                      end ) end : RIL.prog))
;
(* Entry Prog *)
val _ = update_ yyact 53 (fn () => raise yyexit (peekVal 0));
val yytables : parseTables =
  ( yyact,
    yytransl,
    yylhs,
    yylen,
    yydefred,
    yydgoto,
    yysindex,
    yyrindex,
    yygindex,
    YYTABLESIZE,
    yytable,
    yycheck );
fun Prog lexer lexbuf = yyparse yytables 1 lexer lexbuf;
