(TeX-add-style-hook
 "baseheader"
 (lambda ()
   (TeX-add-to-alist 'LaTeX-provided-package-options
                     '(("inputenc" "utf8") ("graphicx" "pdftex") ("ku-frontpage" "english" "science" "titlepage") ("geometry" "showframe" "paper=a4paper" "margin=3in")))
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
    "article"
    "art10"
    "inputenc"
    "latexsym"
    "amssymb"
    "amsmath"
    "stmaryrd"
    "graphicx"
    "ku-frontpage"
    "color"
    "appendix"
    "array"
    "txfonts"
    "hyperref"
    "listings"
    "geometry")
   (TeX-add-symbols
    "M"
    "R"
    "B"
    "D"
    "llb"
    "rrb"
    "empty"))
 :latex)

