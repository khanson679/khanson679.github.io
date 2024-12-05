#!/usr/bin/env bash
set -eu

BUILDDIR=build
INCLUDEDIR=_includes
BIBSRCDIR=/home/kenneth/.texmf/bibtex/bib/
PAPERBIBSRC=hanson.bib
PRESBIBSRC=hanson-pres.bib
PAPERBASENAME=papers
PRESBASENAME=presentations
PAPERBIBFILE=$PAPERBASENAME.bib
PRESBIBFILE=$PRESBASENAME.bib
# PAPERBIBFILE=papers.bib
# PRESBIBFILE=presentations.bib
# PAPERKEYFILE=paperkeys.txt
# PRESKEYFILE=preskeys.txt
# PAPEROUT=$INCLUDEDIR/paperlist.html
# PRESOUT=$INCLUDEDIR/preslist.html

BIBEROPTS="
	--output-format=bibtex \
	--output-field-replace=location:address,journaltitle:journal \
	--output-legacy-dates \
	--output-all-macrodefs \
	--strip-comments \
	--configfile=$BIBSRCDIR/conv-to-bibtex.conf"

HTMLOPTS="--no-abstract --no-keywords --revkeys --nodoc --style plain"

mkdir -p $BUILDDIR
cd $BUILDDIR

# convert to bibtex format
biber --tool $BIBEROPTS --output-file $PAPERBIBFILE $PAPERBIBSRC
biber --tool $BIBEROPTS --output-file $PRESBIBFILE $PRESBIBSRC

# if [ $? != 0 ]; then
# 	echo "***Cannot proceed.***"
# 	exit 1
# fi

bib2bib -c '$type:"ARTICLE\|INPROCEEDINGS"' $PAPERBIBFILE -ob $PAPERBIBFILE >/dev/null
bibtex2html $HTMLOPTS -o $PAPERBASENAME $PAPERBIBFILE

bib2bib $PRESBIBFILE -ob $PRESBIBFILE >/dev/null
bibtex2html $HTMLOPTS -o $PRESBASENAME $PRESBIBFILE

cd ..

# cp

echo "***Done!***"
