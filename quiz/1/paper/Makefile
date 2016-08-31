SHELL = /bin/bash
PAPER  = paper
COVER  = cover
FIGDIR = figures

TEXCMD=TEXINPUTS=".:latex:" pdflatex

# no deps, always remake if asked
all:
	$(MAKE) -C $(FIGDIR)
	$(TEXCMD) $(PAPER)
	#bibtex $(PAPER)
	$(TEXCMD) $(PAPER)

cover:
	$(TEXCMD) $(COVER)

clean:
	$(MAKE) -C $(FIGDIR) clean
	rm -f $(PAPER).{out,toc,aux,bbl,blg,log,pdf,tex.bak}
	rm -f $(COVER).{out,toc,aux,bbl,blg,log,pdf,tex.bak}
	rm -f comment.cut
