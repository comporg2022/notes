#depends on
#pandoc (you may need haskell-updater to install it)
#dev-texlive/texlive-fontsrecommended
#dev-texlive/texlive-latexrecommended

syllabus_co:
	pandoc syllabus_co.md -o syllabus_co.pdf
