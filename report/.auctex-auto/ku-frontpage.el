(TeX-add-style-hook
 "ku-frontpage"
 (lambda ()
   (TeX-add-to-alist 'LaTeX-provided-package-options
                     '(("geometry" "a4paper" "hmargin={55pt, 55pt}" "vmargin={2.8cm, 2.8cm}") ("hyperref" "pdftitle={\\TITLE}" "pdfsubject={\\SUBTITLE}" "pdfauthor={\\AUTHOR}")))
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "href")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "hyperref")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "hyperimage")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "hyperbaseurl")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "nolinkurl")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "url")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "path")
   (add-to-list 'LaTeX-verbatim-macros-with-delims-local "path")
   (TeX-run-style-hooks
    "babel"
    "eso-pic"
    "graphicx"
    "times"
    "ifthen"
    "geometry"
    "hyperref")
   (TeX-add-symbols
    '("frontpageimage" 1)
    '("advisor" 1)
    '("subtitle" 1)
    '("assignment" 1)
    "KUSTYLE"
    "KULANG"
    "KUFACULTY"
    "AUTHOR"
    "TITLE"
    "DATE"
    "ASSIGNMENT"
    "SUBTITLE"
    "ADVISOR"
    "FRONTPAGEIMAGE"
    "KUbold"
    "KUsemibold"
    "maketitle"))
 :latex)

