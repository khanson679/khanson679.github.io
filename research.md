---
title: Research
layout: default
date: 2022-01-08
---

I'm primarily interested in natural language syntax (sentence structure), computational linguistics, and Japanese linguistics. Below are some current and past projects.


## Are syntactic features SL-2 recoverable?

I'm working with Thomas Graf to test his [2020 conjecture][graf-curbing] that syntactic features on lexical categories are SL-2 recoverable, that is, that they can be inferred only from the categories of heads that they select or are selected by.

[graf-curbing]: https://thomasgraf.net/output/graf20sciltalk.html


## Allomorph selection in the Japanese verb paradigm

Allomorphy in the forms of Japanese verbal stems and suffixes appears to be phonologically motivated, yet many of the patterns are unattested elsewhere in the language. This naturally raises the question of how such patterns are encoded in the grammar.

In a recent presentation I examine a proposal by Ito and Mester (2004): lexically specified allomorphs which are selected by the phonology via the mechanisms of Optimality Theory. While the approach elegantly derives much of the verbal paradigm, extending it to the suffixes *-te*, *-ta*, *-tara*, and *-tari* fails due to opacity in the allomorphy of these suffixes, and also results in severe overgeneration. These results suggests that the grammar of Japanese does in fact include phonological processes which are restricted in application to certain verbal suffixes.

* [Abstract (SYNC 2021)](/files/hanson-sync2021-jpnvb-abstract.pdf)
* [Slides (SYNC 2021)](/files/hanson-sync2021-jpnvb-poster.pdf)


## Bare noun phrases in English

I worked with Cristina Schmitt and [Alan Munn][munn] on a diachronic corpus study of the loss of bare singular noun phrases (those lacking a determiner, quantifier, or possessor) in Middle English. Bare singular predicates (such as "doctor" in "He is doctor", with no preceding article) used to be common in Old and Middle English, as they still are in other Germanic and Romance languages, but are severely restricted in Modern English. Our goal is to determine how exactly these changes unfolded and why using statistical measures of their changes in frequency according to syntactic environment and the semantic class of the head noun.

* [Poster (DiGS 2014)](/files/hanson-etal-digs-2014-poster.pdf)

[munn]: http://www.msu.edu/~amunn
[pche]: http://www.ling.upenn.edu/hist-corpora/
[cs]: http://corpussearch.sourceforge.net/


## Corpus tools and methods

### Tracking lexical classes

Part of the bare noun project involved tracking lexical classes of nouns, first because of the need to distinguish between count and mass nouns (not distinguished in the corpus used, as of the time of research), and because we wanted to track several classes of count nouns predicted to be of theoretical relevance. The following poster describes the methods used for this part of the project.

* [Poster (MSULC 2014)](/files/hanson-msulc-2014-poster-corpus-methods.pdf)

### CorpusExtract

A program called [CorpusSearch][cs], developed at the University of Pennsylvania, allows automated searching and coding of syntactically annotated corpora, such as the [Penn Corpora of Historical English][pche]. In order to make the next step, data analysis, easier, I wrote a program I call CorpusExtract, which converts the output of a CorpusSearch coding query to spreadsheet form. See the poster linked below for a more complete explanation of the purpose behind CorpusExtract and its implementation.

* [Poster (MSULC 2013)](/files/corpusextract-poster-2013.pdf)

The current program is built with ANTLR3 and Java, and is fast but limited and inflexible. I may rewrite it in the future.


## Classical Japanese

I worked with Catherine Ryu on a corpus study of the Classical Japanese text  Hyakunin Isshu, a collection of 100 tanka (five line poems with a 5-7-5-7-7 mora structure). My part of the project was to generate statistics and visualizations to show macro-level patterns in the syntax of these poems: where, by line and within lines, do different syntactic categories occur, and in what combinations do they occur? This involved parsing the poems using the morphological analyzer MeCab (with the Early Middle Japanese version of the UniDic dictionary) and running the results through a suite of Python and R scripts.

* [Abstract](/files/hanson-cjpn-poetry-abstract.pdf)


## Human-robot interaction

When I was a research assistant for the [MSU Language and Interaction Research Group (LAIR)][lair], I worked on a project to create an end-to-end system allowing a robot to collaborate with a human partner in a game of object naming, which required to the robot to speech and gesture to proactively mediate its representation of the visual scene with that of its human partner.

* [Conference proceedings](http://dx.doi.org/10.1145/2559636.2559677)
* [Presentation of an early stage of the project](/files/hanson-darwin-presentation-2012.pdf)

[lair]: http://lair.cse.msu.edu/
