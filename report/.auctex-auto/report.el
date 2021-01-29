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
    "sec:org3e32153"
    "flip"
    "grammar"
    "parsing"
    "sec:org4e02070"
    "sec:orgfbe7f49"
    "sec:org8f53134"
    "sec:orgabe523b"
    "sec:orgac5ddbe"
    "sec:orgb425ef7"
    "sec:org16fe006"
    "semantics"
    "ril"
    "operators"
    "invop"
    "sec:org5cf4aa8"
    "sec:org724bfab"
    "sec:orgafa350b"
    "sec:org0d4d7b8"
    "sec:orgb219693"
    "secrules"
    "rules"
    "flowg"
    "sec:org5c7d8bc"
    "sec:org602f922"
    "variables"
    "sec:org669e0a2"
    "constants"
    "sec:org136fd46"
    "pairs"
    "sec:orgb987d5c"
    "As"
    "sec:orgad62c73"
    "Neq"
    "secdefs"
    "defs"
    "sec:orgc11eda0"
    "sec:orgf2d0061"
    "compiler"
    "stack"
    "sec:org8a428aa"
    "sec:orgf1b167a"
    "state"
    "sec:org428beb7"
    "sec:org79dc61e"
    "sec:orgdf85969"
    "sec:org4929a22"
    "sec:org411c5cd"
    "sec:orgcb8821f"
    "appFlip"
    "appParse")
   (LaTeX-add-bibliographies
    "inverse"))
 :latex)

