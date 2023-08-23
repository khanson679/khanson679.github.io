TEXDIR := tex
BUILDDIR := build
IMGDIR := images
TEX := $(wildcard $(TEXDIR)/*.tex)
PDF := $(TEX:$(TEXDIR)/%.tex=$(BUILDDIR)/%.pdf)
SVG := $(TEX:$(TEXDIR)/%.tex=$(IMGDIR)/%.svg)

images/%.svg: build/%.pdf
	mkdir -p images
	pdf2svg $< $@

build/%.pdf: $(TEXDIR)/%.tex
	mkdir -p build
	pdflatex --interaction batchmode --output-directory build $<

all: $(SVG)
	rm -rf $(BUILDDIR)
