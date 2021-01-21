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
    "sec:org0293a97"
    "sec:orgfe06cb9"
    "grammar"
    "sec:org3996f41"
    "sec:org07863a8"
    "sec:org423bef6"
    "sec:org984c7af"
    "sec:org77e4660"
    "sec:orgf8aa22e"
    "sec:org16507a5"
    "sec:org1bb46c8"
    "sec:org12363e7"
    "sec:org974220a"
    "sec:orgbe40d3a"
    "sec:org2e6f225"
    "sec:org584276e"
    "sec:org2dfd57b"
    "sec:org1a6ee6b"
    "sec:org5c1837a"
    "sec:org9650fd0"
    "sec:org09482d0"
    "sec:orgb3ad359"
    "sec:org71376e1"
    "sec:org0d2e23f"
    "sec:org08367fa"
    "sec:org18cf01f"
    "sec:org82cd50a"
    "sec:orgd4a2b13"))
 :latex)

