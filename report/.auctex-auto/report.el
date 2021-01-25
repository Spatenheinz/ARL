(TeX-add-style-hook
 "report"
 (lambda ()
   (TeX-add-to-alist 'LaTeX-provided-class-options
                     '(("article" "a4paper")))
   (TeX-add-to-alist 'LaTeX-provided-package-options
                     '(("inputenc" "utf8") ("fontenc" "T1") ("ulem" "normalem")))
   (add-to-list 'LaTeX-verbatim-environments-local "lstlisting")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "path")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "url")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "nolinkurl")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "hyperbaseurl")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "hyperimage")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "hyperref")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "href")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "lstinline")
   (add-to-list 'LaTeX-verbatim-macros-with-delims-local "path")
   (add-to-list 'LaTeX-verbatim-macros-with-delims-local "lstinline")
   (TeX-run-style-hooks
    "latex2e"
    "baseHeader"
    "article"
    "art10"
    "inputenc"
    "fontenc"
    "graphicx"
    "grffile"
    "longtable"
    "wrapfig"
    "rotating"
    "ulem"
    "amsmath"
    "textcomp"
    "amssymb"
    "capt-of"
    "hyperref")
   (LaTeX-add-labels
    "intro"
    "sec:org31f5b6b"
    "tree"
    "grammar"
    "parsing"
    "sec:orgd664a6e"
    "sec:orgb3df1b5"
    "sec:org52ae51f"
    "sec:orgff77383"
    "sec:orga1127d1"
    "sec:org95cf4a2"
    "sec:orga2db384"
    "semantics"
    "ril"
    "operators"
    "invop"
    "sec:org3cd3e66"
    "sec:orgee28d1e"
    "sec:org32080fb"
    "sec:org0101e74"
    "sec:org0ecb2e8"
    "secrules"
    "rules"
    "flowg"
    "sec:orge886a06"
    "sec:orge509945"
    "variables"
    "sec:org0f48a46"
    "constants"
    "sec:org77e86bb"
    "pairs"
    "sec:orge57bbfe"
    "As"
    "sec:orgc304eb4"
    "Neq"
    "secdefs"
    "defs"
    "sec:orgf21bddc"
    "sec:org332d5f9"
    "compiler"
    "stack"
    "sec:orgf493c49"
    "sec:org6ecb169"
    "state"
    "sec:org10c8bd3"
    "sec:org4b98734"
    "sec:orgc3bd244"
    "sec:org8574572"
    "sec:org7aab773"
    "sec:orge9e92ca")
   (LaTeX-add-bibliographies
    "inverse"))
 :latex)

