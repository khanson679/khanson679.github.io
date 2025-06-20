---
title: Research
layout: default
date: 2025-04-15
---

I'm primarily interested in syntax (sentence structure), computational linguistics, and Japanese linguistics. Below are some current and past projects. [See my CV](/cv) for a more complete list of papers and presentations.


## Computational complexity of syntactic dependencies

Recent work suggests that a wide array of syntactic phenomena are **subregular** over trees, meaning that they occupy strict subclasses of the regular (finite-state) tree languages.
This provides a much tighter bound than previous string-based characterizations, provides insight into the specific formal patterns utilized by natural language, and helps us understand how such patterns can be learned from positive data.
What's more, phonological patterns are also overwhelming subregular over strings, allowing direct comparisons between syntax and phonology.

Among the various subregular classes, **TSL (tier-based strictly local)** seems to be the upper bound for most individual dependencies.
My current work argues that case and agreement dependencies are TSL-2, which means that all constraints can be stated in a window of two elements on a tier of salient elements, and that this provides an explanation of several key properties of their formal typology.

### Agreement

Using a formal model of agreement based on paths though MG (Minimalist Grammar) derivation trees, I show how the natural parameters of the TSL-2 model correspond to attested variation in visibility, directionality, and iteration.
Even seemingly complex patterns from the literature can be provided a simple analysis without resorting to any additional mechanisms.

- For a comprehensive and self-contained presentation, see my [JLM paper][jlm-agreement].
- For a shorter and less technical overview, see my [CLS 60 paper][cls-agreement].
- My talk at the [2024 Workshop on Myopia in Grammar][myopia] focused on locality and the parallel with long-distance harmony in phonology.

I have also developed an analysis of Hindi verbal agreement in two tiers, which demonstrates how the theoretically problematic phenomenon of parasitic agreement arises from the intersection of two very ordinary TSL-2 patterns.

- [poster (PLC 49)][plc-parasitic]
- [handout (SYNC 2024)][sync-parasitic]

### Case

Case also appears to be TSL-2, though it differs from movement and agreement in that it does not (obviously) involve feature matching.
I am currently exploring a model which assigns case to the string of noun phrases in a given domain (ordered by c-command) according to a TSL-2 string language.

In recent paper, I provide an in-depth analysis of case in Japanese, including structural and lexical case, valency alternations, and long-distance case assignment.

- [paper][scil-jpn-case] / [poster][scil-jpn-case-poster] (SCiL 2023)
- [informal presentation (SYNC 2023)][sync-jpn-case]

I am currently expanding the analysis to other languages, mirroring my work on agreement.

- [recent handout][tsl-case]

### Local dependencies

While long-distance dependencies get most of the attention, the study of computational complexity can reveal insights about local dependencies as well.
I tackle this issue in a recent paper using the same path-based model as my work on agreement, showing that most of the logical patterns which can be generated by a strictly local (SL) grammar correspond to some real syntactic phenomenon.

- [paper][sl-in-syntax] / [slides][sl-in-syntax-slides] (CLS 59)

### Further reading

I'm working on a bibliography of subregular linguistics, including not just syntax, but also phonology, morphology, and formal learnability.

- [subregular bibliography](/files/subregular-bibliography.pdf)

[jlm-agreement]: /files/hanson-2025-tsl-agreement.pdf
[cls-agreement]: /files/hanson-cls60-tier-based-agreement.pdf
[plc-parasitic]: /files/hanson-sync2024-parasitic-agreement-ho.pdf
[sync-parasitic]: /files/hanson-plc49-poster.pdf
[sl-in-syntax]: /files/hanson-cls59-sl-in-syntax.pdf
[sl-in-syntax-slides]: /files/hanson-cls59-slides.pdf
[scil-jpn-case]: /files/hanson-scil2023-tsl-jpn-case.pdf
[scil-jpn-case-poster]: /files/hanson-scil2023-poster.pdf
[sync-jpn-case]: /files/hanson-sync2023-jpn-case.pdf
[tsl-case]: /files/hanson-synfl-2025sp-tsl-case.pdf
[myopia]: https://home.uni-leipzig.de/tebay/myopia.htm


## Syntactic learning

The above work extends the finding that long-distance linguistic dependencies are predominantly TSL-2, meaning that all constraints can be stated in a window of two elements on a tier.
This is interesting, as TSL-2 is one of the simplest classes of formal languages which can handle long-distance dependencies at all, and is in principle efficiently learnable.
But there is a lot more that must be done to incorporate this knowledge into a theory of syntactic learning.

In a recent paper, I adapt a system by a group at UPenn, which learns syntactic islands from movement path using the Tolerance Principle, to produce a TSL-2 grammar, and discuss the relative roles of the grammar formalism and the learning theory in explaining the constraints on long-distance syntactic dependencies.

- [Paper (SCiL 2024)][tiers-paths]

[tiers-paths]: /files/hanson-scil2024-tiers-paths-locality.pdf
[lambert.etal2021]: https://jlm.ipipan.waw.pl/index.php/JLM/article/view/262


## Restrictions on syntactic feature systems

I'm working with Logan Swanson and [Thomas Graf][graf] to test Thomas's [2020 conjecture][graf2020-curbing] that syntactic category features are ISL-2 recoverable, that is, that they can be inferred only from the categories of heads that they select or are selected by, using data from [MGBank][mgbank], an MG corpus built from the Penn Treebank. Such a principle could plug a hole found in many grammatical formalisms which allows linguistically unnatural patterns to be encoded via category features.

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
