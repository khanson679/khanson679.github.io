---
title: Research
layout: default
date: 5/19/2014
---

I'm primarily interested in natural language syntax (sentence structure) from a variety of perspectives: theoretical, historical, psycholinguistic, and computational. I'm also interested in Japanese linguistics and second language acquisition. Currently, I'm working on two corpus linguistics projects.


## Bare Noun Phrases in English

I'm working with Cristina Schmitt and [Alan Munn][9] on a diachronic corpus study of the loss of bare singular noun phrases (those lacking a determiner, quantifier, or possessor) in Middle English. Bare singular predicates (such as "doctor" in "He is doctor", with no preceding article) used to be common in Old and Middle English, as they still are in other Germanic and Romance languages, but are severely restricted in Modern English. Our goal is to determine how exactly these changes unfolded and why using statistical measures of their changes in frequency according to syntactic environment and the semantic class of the head noun.

* [Abstract][10]
* [Corpus Methods Poster (2014)][15]


### CorpusExtract

A program called [CorpusSearch][11], developed at UPenn, allows automated searching and coding of syntactically annotated corpora, such as the [Penn Corpora of Historical English][12]. In order to make the next step, data analysis, easier, I'm developing a program I call CorpusExtract, which converts the output of a CorpusSearch coding query to spreadsheet form. See my [2013 poster][13] for a more complete explanation of the purpose behind CorpusExtract and its (first) implementation.

I'm using the development version of the program as part of the English Bare NP project. The current program is Java/ANTLR3-based, and is fast but inflexible. I'm currently re-implementing it using Python and the NLTK. Once the program is feature complete and the bugs are ironed out, I plan to release CorpusExtract as open-source software.

* [Corpus Extract Poster (2013)][13]


## Classical Japanese

I have worked with Catherine Ryu on a corpus study of the Classical Japanese text  Hyakunin Isshu, a collection of 100 tanka (five line poems with a 5-7-5-7-7 mora structure). My part of the project was to generate statistics and visualizations to show macro-level patterns in the syntax of these poems: where, by line and within lines, do different syntactic categories occur, and in what combinations do they occur? This involved parsing the poems using the morphological analyzer MeCab (with the Early Middle Japanese version of the UniDic dictionary) and running the results through a suite of Python and R scripts.

* [Abstract][14]


[9]: http://www.msu.edu/~amunn
[10]: {{ site.baseurl }}/files/hanson-etal-bare-nps-abstract.pdf
[11]: http://corpussearch.sourceforge.net/
[12]: http://www.ling.upenn.edu/hist-corpora/
[13]: {{ site.baseurl }}/files/corpusextract-poster-2013.pdf
[14]: {{ site.baseurl }}/files/hanson-cjpn-poetry-abstract.pdf
[15]: {{ site.baseurl }}/files/hanson-msulc-2014-poster-corpus-methods.pdf