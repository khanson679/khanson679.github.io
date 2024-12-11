---
title: Research
layout: default
date: 2024-12-11
---

I'm primarily interested in syntax (sentence structure), computational linguistics, and Japanese linguistics. Below are some current and past projects.


## Computational complexity of syntactic dependencies

Recent work suggests that a wide array of syntactic phenomena fall under the formal class TSL (tier-based strictly local), mirroring earlier findings in phonology and morphology. Syntactic phenomena studied to date include movement ([Graf 2022][graf2022-movement]), case ([Vu et al. 2019][vu.etal2019]), and licensing of anaphora and NPIs ([Graf & Shafiei 2019][graf.shafiei2019]). These results are promising, but the large degree of variation across languages combined the with abstractness of syntactic representations means that further cross-linguistic surveys and in-depth case studies are needed. My work focuses on the the typology of case and agreement configurations.

- In an upcoming paper, I show that "exotic" forms of agreement such as case-sensitive agreement, upward agreement, A' agreement all fit neatly into the typology predicted by TSL, by virtue of its ability to specify invisible and blocking elements, and flexible directionality. ([preprint](/files/hanson-ms-tsl-agreement.pdf))
    - For a less technical presentation, see my [CLS 60 paper](/files/hanson-cls60-tier-based-agreement.pdf).
- In a recent paper, I analyze a wide range of case patterns in Japanese, including long-distance licensing of accusative and genitive case, and show that they are TSL. ([paper][jpn-case] / [poster][jpn-case-poster])
- While long-distance dependencies get most of the attention, the computational perspective can reveal insights about local dependencies as well. I tackle this issue through the lens of finite-state automata in a recent paper. ([paper][sl-in-syntax] / [slides][sl-in-syntax-slides]).

[sl-in-syntax]: /files/hanson-cls59-sl-in-syntax.pdf
[sl-in-syntax-slides]: /files/hanson-cls59-slides.pdf
[jpn-case]: https://scholarworks.umass.edu/scil/vol6/iss1/4
[jpn-case-poster]: /files/hanson-scil2023-poster.pdf
[graf2022-movement]: https://aclanthology.org/2022.scil-1.15/
[graf.shafiei2019]: https://aclanthology.org/W19-0121/
[vu.etal2019]: https://aclanthology.org/W19-0127/


## Syntactic learning

The above work suggests that many, perhaps even most long-distance linguistic dependencies are TSL-2, meaning that all constraints can be stated in a window of two elements on a tier.
This is interesting, as TSL-2 is one of the simplest classes of formal languages which can handle long-distance dependencies at all.
Recent research (e.g. [Lambert et al 2021][lambert.etal2021]) argue that this simplicity is intimately related to efficient learnability, providing an important clue for developing a computational theory of how such dependencies are learned.

- Inspired by recent work from a group at UPenn using the Tolerance Principle to learn syntactic islands, I sketch how their system could be adapted to produce a TSL-2 grammar, and discuss the relative roles of the grammar and the acquisition theory in explaining the constraints on long-distance syntactic dependencies. ([paper][tiers-paths])

[tiers-paths]: /files/hanson-scil2024-tiers-paths-locality.pdf
[lambert.etal2021]: https://jlm.ipipan.waw.pl/index.php/JLM/article/view/262


## Restrictions on syntactic feature systems

I'm working with Logan Swanson and [Thomas Graf][graf] to test Thomas's [2020 conjecture][graf2020-curbing] that syntactic category features are ISL-2 recoverable, that is, that they can be inferred only from the categories of heads that they select or are selected by, using data from [MGBank][mgbank], an MG corpus built from the Penn Treebank. Such a principle could plug a hole found in many grammatical formalisms which allows linguistically unnatural patterns to be encoded via the feature system.

[graf]: https://thomasgraf.net
[graf2020-curbing]: https://aclanthology.org/2020.scil-1.27/
<!-- [graf-curbing]: https://thomasgraf.net/output/graf20sciltalk.html -->
[mgbank]: https://aclanthology.org/E17-3021/


## Allomorph selection in the Japanese verb paradigm

Allomorphy in the forms of Japanese verbal stems and suffixes appears to be phonologically motivated, yet many of the patterns are unattested elsewhere in the language. This naturally raises the question of how such patterns are encoded in the grammar.

In a recent presentation I examine a proposal by Ito and Mester (2004) in which lexically specified allomorphs are selected by the phonology via the mechanisms of Optimality Theory. While the approach elegantly derives much of the verbal paradigm, extending it to the suffixes *-te*, *-ta*, *-tara*, and *-tari* fails due to opacity in the allomorphy of these suffixes, and also results in severe overgeneration. These results suggests that the grammar of Japanese does in fact include phonological processes which are restricted to certain verbal suffixes.

* [Abstract (SYNC 2021)](/files/hanson-sync2021-jpnvb-abstract.pdf)
* [Slides (SYNC 2021)](/files/hanson-sync2021-jpnvb-pres.pdf)

In an upcoming paper, I propose an answer as to what is really going on, and discuss avenues for further exploration.


## Bare noun phrases in the history of English

I worked with Cristina Schmitt and [Alan Munn][munn] on a diachronic corpus study of the loss of bare singular noun phrases (those lacking a determiner, quantifier, or possessor) in Middle English. Bare singular predicates (such as "doctor" in "He is doctor", with no preceding article) used to be common in Old and Middle English, as they still are in other Germanic and Romance languages, but are severely restricted in Modern English. Our goal is to determine how exactly these changes unfolded and why using statistical measures of their changes in frequency according to syntactic environment and the semantic class of the head noun.

* [Poster (DiGS 2014)](/files/hanson-etal-digs-2014-poster.pdf)
* [Presentation (GLEEFUL 2014)](/files/hanson-etal-gleeful2014-pres-bare-nps.pdf)

[munn]: https://amunn.github.io/
[pche]: http://www.ling.upenn.edu/hist-corpora/
[cs]: http://corpussearch.sourceforge.net/


## Corpus tools and methods

### Tracking lexical classes

Part of the bare noun project involved tracking lexical classes of nouns, first because of the need to distinguish between count and mass nouns (not distinguished in the corpus used, as of the time of research), and because we wanted to track several classes of count nouns predicted to be of theoretical relevance. The following poster describes the methods used for this part of the project.

* [Poster (MSULC 2014)](/files/hanson-msulc2014-poster-corpus-methods.pdf)

### CorpusExtract

A program called [CorpusSearch][cs], developed at the University of Pennsylvania, allows automated searching and coding of syntactically annotated corpora, such as the [Penn Corpora of Historical English][pche]. In order to make the next step, data analysis, easier, I wrote a program I call CorpusExtract, which converts the output of a CorpusSearch coding query to spreadsheet form. See the poster linked below for a more complete explanation of the purpose behind CorpusExtract and its implementation.

* [Poster (MSULC 2013)](/files/hanson-corpusextract-poster-2013.pdf)


## Classical Japanese Poetry

I worked with Catherine Ryu on a corpus study of the Classical Japanese text *Hyakunin Isshu*, a collection of 100 tanka (five line poems with a 5-7-5-7-7 mora structure). My part of the project was to generate statistics and visualizations to show macro-level patterns in the syntax of these poems: where, by line and within lines, do different syntactic categories occur, and in what combinations do they occur? This involved parsing the poems using the morphological analyzer MeCab (with the Early Middle Japanese version of the UniDic dictionary) and running the results through a suite of Python and R scripts.

* [Presentation (MSULC 2014)](/files/hanson-msulc2014-pres-cjpn-poetry.pdf)


## Human-robot interaction

When I was a research assistant for the [MSU Language and Interaction Research Group (LAIR)][lair], I worked on a project to create an end-to-end system allowing a robot to collaborate with a human partner in a game of object naming, which required to the robot to speech and gesture to proactively mediate its representation of the visual scene with that of its human partner.

* [Paper (HRI 2014)](http://dx.doi.org/10.1145/2559636.2559677)
* [Presentation from an early stage of the project](/files/hanson-darwin-presentation-2012.pdf)

[lair]: http://lair.cse.msu.edu/
