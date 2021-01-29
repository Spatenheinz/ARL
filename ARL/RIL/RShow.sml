(* RIL parsing and printing *)
(* compile with mosmlc RShow.sml -o RShow *)
structure RShow =
struct

  fun createLexerStream ( is : BasicIO.instream ) =
      Lexing.createLexer ( fn buff => fn n => Nonstdio.buff_input is buff 0 n)

  fun errorMess s = TextIO.output (TextIO.stdErr,s ^ "\n");

  fun rs filename =  
      let
        val lexbuf = createLexerStream
			  (BasicIO.open_in (filename ^ ".ril"))
      in
        let
          val pgm = Parser.Prog Lexer.Token lexbuf
	  (* val () = Type.checkProgram pgm *)
          val outfile = TextIO.openOut (filename ^ "_expanded.ril")
        in
          (* TextIO.output (outfile, RIL.showProg pgm); *)
          TextIO.output (outfile, RIL.showProg pgm);
	  TextIO.closeOut outfile
        end
          handle Parsing.yyexit ob => errorMess "Parser-exit\n"
               | Parsing.ParseError ob =>
                   let val (lin,col) = Lexer.getPos lexbuf
                   in
                     errorMess ("Parse-error at line "
                      ^ makestring lin ^ ", column " ^ makestring col)
                   end
               | Lexer.LexicalError (mess,(lin,col)) =>
                     errorMess ("Lexical error: " ^mess^ " at line "
                      ^ makestring lin ^ ", column " ^ makestring col)
               | SysErr (s,_) => errorMess ("Exception: " ^ s)
      end

  val _ = (rs (List.nth(Mosml.argv (),1)))
          handle Subscript => errorMess "call by, e.g.  RShow hash"

end
