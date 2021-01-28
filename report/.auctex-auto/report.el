(TeX-add-style-hook
 "report"
 (lambda ()
   (TeX-add-to-alist 'LaTeX-provided-class-options
                     '(("article" "a4paper")))
   (TeX-add-to-alist 'LaTeX-provided-package-options
                     '(("inputenc" "utf8") ("fontenc" "T1") ("ulem" "normalem")))
   (add-to-list 'LaTeX-verbatim-environments-local "lstlisting")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "lstinline")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "href")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "hyperref")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "hyperimage")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "hyperbaseurl")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "nolinkurl")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "url")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "path")
   (add-to-list 'LaTeX-verbatim-macros-with-delims-local "lstinline")
   (add-to-list 'LaTeX-verbatim-macros-with-delims-local "path")
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
    "sec:orgf653890"
    "flip"
    "grammar"
    "parsing"
    "sec:org0b11442"
    "sec:orgfb198d0"
    "sec:org05f8e66"
    "sec:orgbeb6bb0"
    "sec:org64a3f80"
    "sec:orgf1e7a94"
    "sec:org416021b"
    "semantics"
    "ril"
    "operators"
    "invop"
    "sec:orgc1e3b2d"
    "sec:orgef068a8"
    "sec:org3038571"
    "sec:orge03911b"
    "sec:orgdc632c2"
    "secrules"
    "rules"
    "flowg"
    "sec:org8bc6409"
    "sec:orgb2289de"
    "variables"
    "sec:orgbb76d1d"
    "constants"
    "sec:org8573180"
    "pairs"
    "sec:org06f48d7"
    "As"
    "sec:orgbb63d5a"
    "Neq"
    "secdefs"
    "defs"
    "sec:orgb7f728d"
    "sec:org6048366"
    "compiler"
    "stack"
    "sec:orgb037ea2"
    "sec:orgb297026"
    "state"
    "sec:orgfc55a8e"
    "sec:org2b6c66f"
    "sec:org50a9668"
    "sec:org6bf3e8a"
    "sec:orgde6f82f"
    "sec:org658455e"
    "sec:orga3d7b85"
    "sec:org4f2ef7d")
   (LaTeX-add-bibliographies
    "inverse"))
 :latex)

