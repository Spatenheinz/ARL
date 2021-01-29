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
    "sec:orge3e81bc"
    "flip"
    "grammar"
    "parsing"
    "sec:org80102fb"
    "sec:org99917b6"
    "sec:org1e7443d"
    "sec:org80d6eb8"
    "sec:org322c240"
    "sec:orgb1b4c59"
    "sec:org0343d31"
    "semantics"
    "ril"
    "operators"
    "invop"
    "sec:org41e58fa"
    "sec:orga6dc8f7"
    "sec:orgd348df3"
    "sec:orgd8a2475"
    "sec:org81d4b1a"
    "secrules"
    "rules"
    "flowg"
    "sec:orgc4f67ef"
    "sec:org3f48f42"
    "variables"
    "sec:orgffdebe5"
    "constants"
    "sec:org9a251db"
    "pairs"
    "sec:org3f92834"
    "As"
    "sec:orga4cfc3b"
    "Neq"
    "secdefs"
    "defs"
    "sec:org4cc3842"
    "sec:orgeb5df6b"
    "compiler"
    "stack"
    "sec:orgf5c32eb"
    "sec:orgafed8f7"
    "state"
    "sec:org57ffa3e"
    "sec:org9631d40"
    "sec:orge22c22d"
    "sec:orgc069044"
    "sec:org70ad947"
    "sec:org08edcef"
    "appFlip"
    "appParse")
   (LaTeX-add-bibliographies
    "inverse"))
 :latex)

