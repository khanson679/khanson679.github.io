---
title: Research
layout: default
date: 2016-03-19
---

I'm primarily interested in natural language syntax (sentence structure) from a variety of perspectives: theoretical, historical, psycholinguistic, and computational. I'm also interested in Japanese linguistics. Below are some recent projects.


## Bare Noun Phrases in English

I'm working with Cristina Schmitt and [Alan Munn][munn] on a diachronic corpus study of the loss of bare singular noun phrases (those lacking a determiner, quantifier, or possessor) in Middle English. Bare singular predicates (such as "doctor" in "He is doctor", with no preceding article) used to be common in Old and Middle English, as they still are in other Germanic and Romance languages, but are severely restricted in Modern English. Our goal is to determine how exactly these changes unfolded and why using statistical measures of their changes in frequency according to syntactic environment and the semantic class of the head noun.

* [English Bare NPs Poster (DiGS 2014)](/files/hanson-etal-digs-2014-poster.pdf)
* [Corpus Methods Poster (MSULC 2014)](/files/hanson-msulc-2014-poster-corpus-methods.pdf)


### CorpusExtract

A program called [CorpusSearch][cs], developed at UPenn, allows automated searching and coding of syntactically annotated corpora, such as the [Penn Corpora of Historical English][pche]. In order to make the next step, data analysis, easier, I wrote a program I call CorpusExtract, which converts the output of a CorpusSearch coding query to spreadsheet form. See the below poster for a more complete explanation of the purpose behind CorpusExtract and its implementation.

* [Corpus Extract Poster (MSULC 2013)](/files/corpusextract-poster-2013.pdf)

The current program is Java/ANTLR3-based, and is fast but limited and inflexible. At some point, I plan to rewrite and release it as open-source software.




## Classical Japanese

I worked with Catherine Ryu on a corpus study of the Classical Japanese text  Hyakunin Isshu, a collection of 100 tanka (five line poems with a 5-7-5-7-7 mora structure). My part of the project was to generate statistics and visualizations to show macro-level patterns in the syntax of these poems: where, by line and within lines, do different syntactic categories occur, and in what combinations do they occur? This involved parsing the poems using the morphological analyzer MeCab (with the Early Middle Japanese version of the UniDic dictionary) and running the results through a suite of Python and R scripts.

* [Abstract](/files/hanson-cjpn-poetry-abstract.pdf)


[munn]: http://www.msu.edu/~amunn
[pche]: http://www.ling.upenn.edu/hist-corpora/
[cs]: http://corpussearch.sourceforge.net/