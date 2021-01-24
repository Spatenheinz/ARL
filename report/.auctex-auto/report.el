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
    "sec:org2b09096"
    "sec:org2895534"
    "grammar"
    "sec:org97da5c1"
    "sec:orgfff26ab"
    "sec:org2ce1cd5"
    "sec:org762656c"
    "sec:org18bf185"
    "sec:org823f1f2"
    "sec:orgc027d6f"
    "sec:org88a8fac"
    "sec:org8b98fcb"
    "sec:orgffae8b3"
    "sec:orgaf9dd9b"
    "sec:orgd3f0b1c"
    "sec:org473e38b"
    "sec:org7546fa2"
    "sec:org7c22514"
    "sec:orgadc53c6"
    "rules"
    "sec:org62f0b75"
    "sec:org5ff9d66"
    "variables"
    "sec:org4edb57e"
    "constants"
    "sec:orge75efa8"
    "pairs"
    "sec:org541e4e6"
    "As"
    "sec:orgce7aec1"
    "Neq"
    "sec:org2642d81"
    "defs"
    "sec:org951b0ba"
    "sec:orgd219309"
    "sec:orgaeb9201"
    "sec:org763fa06"
    "sec:orgf78172a"
    "sec:orgd2308c6"
    "sec:org3285223"
    "sec:org22d23b9"
    "sec:orgf726c34"
    "sec:org6c3ec0d"
    "sec:org9b415c1"
    "sec:orgf350639"
    "sec:org0b73c81")
   (LaTeX-add-bibliographies
    "inverse"))
 :latex)

