---
title: LaTeX Tree Drawing Workshop
layout: default
date: 2022-11-15
---

This tutorial covers the following topics:
1. Creating bracketed trees using a text editor
2. Using an online tree-drawing program to generate images
3. Drawing trees with LaTeX

Part 1 covers editing bracketed trees and using using the web app [jsSyntaxTree][jssyntaxtree] to generate images.
This may be all you need if you just want to copy the images into another document.

Part 2 covers tree drawing in LaTeX using the package [tikz-qtree].
The same basic principles apply, but there is a lot more that you can do, and there are minor gotchas with the syntax.
If you want to keep everything in one file rather that keeping track of many separate image files, or need more control over the formatting, this is the way to go.

<h2>Contents</h2>
* Kramdown TOC (this line will be deleted)
{:toc}


## Preliminaries

### Text editors

Bracketed trees are easiest to create and modify using a text editor (not to be confused with a word processor), which helps you use indentation to structure the tree, highlights matching brackets, and much more.
There are many good options, but I recommend [Sublime Text](http://www.sublimetext.com), which works on all major operating systems and has an unlimited free trial.

Some other (free and open source) text editors include:

- [Notepad++](http://notepad-plus-plus.org/) (Windows only)
- [Geany](http://www.geany.org) (cross-platform, similar to Notepad++)
- [Kate](https://kate-editor.org/) (cross-platform)

Note that the built-in Windows editor, Notepad, lacks auto-indentation and other critical features and is thus nearly useless.
TextEdit in OSX is more of a word processor than a text editor and is likewise not appropriate.

### LaTeX

Installing LaTeX on your computer is beyond the scope of this tutorial.
If you don't want to go through the trouble right now, make a free account with the web app [Overleaf][overleaf].


## Part 1: Using a text editor

While you can certainly type bracketed trees right into the web app, large trees quickly become unreadable, and it's difficult to fix bracketing problems.
Furthermore, if you're working on a paper, you probably want to keep the source data for all your trees so you can easily change them later.
The solution is to write everything in your text editor, then copy and paste into the web app to generate the images.

First, familiarize yourself how to indent and de-indent text.
Open a new file and type a few lines of text.
Set your cursor and the start of a line, then press tab to indent, shift+tab to de-indent.
Usually, have the cursor at the first non-space character is good enough for de-indenting to work.

Next, select several lines, and do the same thing.
Depending on your editor, you might need to make sure the cursor is at the beginning of the first selected line (perhaps with spaces in front).
Sublime is not picky -- it will happily de-indent multiple lines even if the first and last are only partially selected.

Now, let's add some brackets.
Type a left square bracket '['.
Many editors will automatically insert a matching right bracket immediately after the cursor.
You can type whatever should go between the brackets, then type a right bracket to move the cursor through it (alternatively, press the right arrow key).

If you find this feature more annoying that helpful, you can usually disable it. In Sublime: go to `Preferences / Settings - User` and insert the following line between the brackets in the settings file, then save and close:
-   "auto\_match\_enabled": false

Finally, test bracket highlighting.
Type a simple bracketed tree, or copy this one:
- [TP [DP monkeys] [T' [T PRES] [VP [V like] [DP bananas]]]]

Place your cursor next to a bracket (left or right).
Your editor should highlight the matching bracket.
This feature is extremely helpful when debugging ill-formed trees.


## Part 2: Tree drawing with jsSyntaxTree

There are several good tree drawing web apps nowadays.
In this tutorial we'll use [jsSyntaxTree][jssyntaxtree], which is pretty straightforward and has some nice features.


### Simple trees

We'll start with some simple X-bar trees.
Copy the trees below (excluding the example number) into the text box in jsSyntaxTree to test them out.
By default, it will add indices to internal nodes (phrase labels) with the same label. You can disable this by unchecking the option "Auto subscript".

```
(1) [TP [DP monkeys] [T' [T PRES] [VP [V like] [DP bananas]]]]
```

Terminal nodes with multiple words automatically make a triangle.

```
(2) [TP [DP crazy monkeys] [T' [T PRES] [VP [V like] [DP purple bananas]]]]
```

A node can have any number of children, so you can create ternary structures.

```
(3) [TP [DP John] [T' [T PAST] [VP [V give] [DP a cupcake] [PP to Mary]]]]
```

The colors will be messed up if you leave out the leaf nodes (words), but you can also turn the colors off entirely.

**Exercise 1**

Copy example (3) into your editor and complete the structure of the DPs/PPs. Use the letter 'e' to label empty nodes.

<details>
    <summary>
        Show Answer
    </summary>
    <code>
        [TP [DP [D e] [NP John]] [T' [T PAST] [VP [V gave] [DP [D a] [NP cupcake]] [PP [P to] [DP [D e] [NP Mary]]]]]]
    </code>
</details>

**Exercise 2**

Create the tree for "Every monkey wants a yellow banana".

<details>
    <summary>
        Show Answer
    </summary>
    <code>
	   [TP [DP [D every] [NP monkey]] [T' [T PRES] [VP [V wants] [DP [D a] [NP [AP yellow] [NP banana]]]]]]
	</code>
</details>


### Indented trees

We can make an indented tree to show the structure.
Press "enter" (return) to move the subject and VP to a new line and "tab" to indent.

The editor will keep the current level of indentation when you press "enter".
Continue the process of converting the linear format until each child is indented by one more level than its parent.

```
(4)
[TP
    [DP crazy monkeys]
    [T' [T PRES] [VP [V like] [DP purple bananas]]]]

[TP
    [DP crazy monkeys]
    [T'
        [T PRES]
        [VP [V like] [DP purple bananas]]]]

[TP
    [DP crazy monkeys]
    [T'
        [T PRES]
        [VP
            [V like]
            [DP purple bananas]]]]
```

You also give each closing bracket its own line (the typical format used in
programming languages like C and C++).

This makes it easier to see that the brackets are matched, and it also makes
it easier to modify the tree, but the result takes up much more vertical
space. In this tutorial, I will leave the brackets on the last "content" line.

```
(5)
[TP
    [DP crazy monkeys]
    [T'
        [T PRES]
        [VP
            [V like]
            [DP purple bananas]
        ]
    ]
]
```

**Exercise 3**

Copy the bracketed tree from Exercise 2 and indent it.

<details>
<summary>
Show Answer
</summary>
<pre><code>
[TP
    [DP
        [D every]
        [NP monkey]]
    [T'
        [T PRES]
        [VP
            [V wants]
            [DP
                [D a]
                [NP
                    [AP yellow]
                    [NP banana]]]]]]
</code></pre>
</details>



### Modifying bracketed trees

Now, let's add some adjuncts to a tree. First, let's indent the tree from Exercise 1.

```
(6)
[TP
    [DP
        [D e]
        [NP John]]
    [T'
        [T PAST]
        [VP
            [V give]
            [DP
                [D a]
                [NP cupcake]]
            [PP
                [P to]
                [DP
                    [D e]
                    [NP Mary]]]]]]
```

When writing trees from scratch, it's common leave small subtrees (such as short DPs) all on one line.
This makes the resulting tree more compact, but still readable.

```
(7)
[TP
    [DP [D e] [NP John]]
    [T'
        [T PAST]
        [VP
            [V give]
            [DP [D a] [NP cupcake]]
            [PP
                [P to]
                [DP [D e] [NP Mary]]]]]]
```

You could also move T to the T' line, and P to the PP line (you see this style in syntactic corpora), but let's keep it like this for now.

It's time to add the adjunct. Copy example (7) into your text editor.
Place the cursor right after the closing bracket of the VP, press enter to create a new line, and back up to the indentation of VP.
Then add the PP "for her birthday".

```
(8)
[TP
    [DP [D e] [NP John]]
    [T'
        [T PAST]
        [VP
            [V give]
            [DP [D a] [NP cupcake]]
            [PP
                [P to]
                [DP [D e] [NP Mary]]]]

        ]]

[TP
    [DP [D e] [NP John]]
    [T'
        [T PAST]
        [VP
            [V give]
            [DP [D a] [NP cupcake]]
            [PP
                [P to]
                [DP [D e] [NP Mary]]]]
        [PP
            [P for]
            [DP
                [D her]
                [NP birthday]]]]]
```

The tree is not quite finished.
We need to add the new VP that is formed by adjoining the PP.
Select both the VP and PP by clicking and dragging and indent them by pressing tab.
Then, add the new VP around them.

```
(9)
[TP
    [DP [D e] [NP John]]
    [T'
        [T PAST]
        [VP
            [VP
                [V give]
                [DP [D a] [NP cupcake]]
                [PP
                    [P to]
                    [DP [D e] [NP Mary]]]]
            [PP
                [P for]
                [DP
                    [D her]
                    [NP birthday]]]]]]
```

You can also unindent a block of text by pressing shift-tab. Try removing the
adjunct and the outer VP, and use shift-tab to unindent the inner VP.


### More practice

For practice, here are some more interesting sentences to draw.

**Exercise 4**

Draw the tree for "The cupcake might not have been eaten".
Hint: "might" is in T, "not" is Neg, "have" and "been" are Aux.

<details>
<summary>
Show Answer
</summary>
<pre><code>
[TP
    [DP the cupcake]
    [T'
        [T might]
        [NegP
            [Neg not]
            [AuxP
                [Aux have]
                [AuxP
                    [Aux been]
                    [VP eaten]]]]]]
</code></pre>
</details>

**Exercise 5**

Draw the tree for "Bill thinks that Mary ate the cupcake".

Hint: "that" clauses are CPs.

<details>
<summary>
Show Answer
</summary>
<pre><code>
[TP
    [DP Bill]
    [T'
        [T PRES]
        [VP
            [V thinks]
            [CP
                [C that]
                [TP
                    [DP Mary]
                    [T'
                        [T PAST]
                        [VP
                            [V ate]
                            [DP the cupcake]]]]]]]]
</code></pre>
</details>

**Exercise 6**

Draw the tree for "Tom wants to be a syntactician".

Hints:
- Infinitival clauses are TPs.
- This is a control structure, so the embedded subject is PRO.

<details>
<summary>
Show Answer
</summary>
<pre><code>
[TP
    [DP Tom]
    [T'
        [T PRES]
        [VP
            [V wants]
            [TP
                [DP PRO]
                [T'
                    [T to]
                    [VP
                        [V be]
                        [DP a syntactician]]]]]]]
</code></pre>
</details>


### Movement

[jsSyntaxTree][jssyntaxtree] can add simple movement arrows between words.
The web app opens with an example like this.

Another method is to use indices, which you need for other kinds of coreference anyway.
Put the structure of the moved element in its final position, and put traces in the lower positions.
Turn off automatic indexing and use manual indexes by appending "\_1", "\_2",
etc. to moved elements and their traces.

```
(10)
[CP
    [DP what_1]
    [C'
        [C [T did_2] [C e]]
        [TP
            [DP the king]
            [T'
                [T t_2]
                [VP
                    [V eat]
                    [DP t_1]]]]]]
```

**Exercise 7**

Draw the tree for "Where does Chomsky get his ideas from?"

<details>
<summary>
Show Answer
</summary>
<pre><code>
[CP
    [DP where_1]
    [C'
        [C [T does_2] [C e]]
        [TP
            [DP Chomsky]
            [T'
                [T t_2]
                [VP
                    [VP
                        [V get]
                        [DP his ideas]]
                    [PP
                        [P from]
                        [DP t_1]]]]]]]
</code></pre>
</details>


## Part 3: Tree drawing with LaTeX

There are multiple tree-drawing packages for LaTeX.
In this tutorial we will use [tikz-qtree].
This package simulates an older packaged named "qtree", but allows you to use TikZ drawing commands in the tree, which is useful for movement arrows among other things.

### Tikz-qtree basics

If you have LaTeX installed, or Overleaf open, you should test the examples in this section in a LaTeX document.
You can use the following template.

```
\documentclass[12pt]{article}
\usepackage{tikz-qtree}
\begin{document}
YOUR TREE HERE
\end{document}
```

Qtree syntax is slightly unusual, and very strict:

1. The bracketed tree must be directly preceded by "\Tree".
2. All node labels must start with a period.
3. All closing brackets must be directly preceded by whitespace.

A simple example:

```
(11)
\Tree
[.TP
    [.DP [.D a ] [.NP [.AP wild ] [.NP Pikachu ] ] ]
    [.T'
        [.T PAST ]
        [.VP appeared ] ] ]
```

In order to get rid of the lines between terminal nodes and their labels, you can connect the label to the node with a `\\`, which creates a manual newline.
In order for this to work, you need to first set node alignment:

```
\tikzset{every tree node/.style={align=center,anchor=north}}
```

Here's an example using this format.

```
(12)
\Tree
[.TP
    [.DP [.D\\a ] [.NP [.AP\\wild ] [.NP\\Pikachu ] ] ]
    [.T'
        [.T\\PAST ]
        [.VP\\appeared ] ] ]
```

You can get nicer "bars" (primes signs, really) by appending `$'$` to a label.
Use `\textsc{...}` to get small caps.

```
(13)
\Tree
[.TP
    [.DP [.D\\a ] [.NP [.AP\\wild ] [.NP\\Pikachu ] ] ]
    [.T\1
        [.T\\\textsc{PAST} ]
        [.VP\\appeared ] ] ]
```

### A more complex example

Now, an example with little *v*.
The sentence we will use is "John rolled the ball down the hill".
First, the simple structure.

```
(14)
\Tree
[.TP
    [.DP\\John ]
    [.T\1
        [.T\\PAST ]
        [.VP
            [.V\\roll ]
            [.DP
                [.D\\the ]
                [.NP\\ball ] ]
            [.PP
                [.P\\down ]
                [.DP
                    [.D\\the ]
                    [.NP\\hill ] ] ] ] ] ]
```

Next, we add movement with traces using ordinary LaTeX subscripts.

```
(15)
\Tree
[.TP
    [.DP\\John$_1$ ]
    [.T$'$
        [.T\\PAST ]
        [.vP
            [.DP\\t$_1$ ]
            [.v$'$
                [.v
                    [.V\\roll$_2$ ]
                    [.v ] ]
                [.VP
                    [.DP
                        [.D\\the ]
                        [.NP\\ball ] ]
                    [.V$'$
                        [.V\\t$_2$ ]
                        [.PP
                            [.P\\down ]
                            [.DP
                                [.D\\the ]
                                [.NP\\hill ] ] ] ] ] ] ] ] ]
```

And finally, a version movement with arrows.
In a nutshell, you must create a "node" with a name for the start and end of each arrow using the TikZ `\node` command.
Then, use `\draw` commands for the arrows.
All of this must go inside a `tikzpicture` environment.

```
(16)
\begin{tikzpicture}
\Tree
[.TP
    [.DP \node(tgt1){John}; ]
    [.T$'$
        [.T\\PAST ]
        [.vP
            [.\node(src1){t}; ]
            [.v$'$
                [.v
                    [.\node(tgt2){V\\roll}; ]
                    [.v ] ]
                [.VP
                    [.DP
                        [.D\\the ]
                        [.NP\\ball ] ]
                    [.V$'$
                        [.\node(src2){t}; ]
                        [.PP
                            [.P\\down ]
                            [.DP
                                [.D\\the ]
                                [.NP\\hill ] ] ] ] ] ] ] ] ]
\draw[semithick,->] (src1)..controls +(south west:2) and +(south:2)..(tgt1);
\draw[semithick,->] (src2)..controls +(south:2) and +(south:3)..(tgt2);
\end{tikzpicture}
```

That's it! For details, consult the [tikz-qtree documentation][tikz-qtree].
For more on drawing with TikZ, see the monstrous, but very good [manual][tikz].


### An alternative: Forest

[Forest][forest] is a newer package for drawing trees that is completely unrelated to qtree, and excels at fine-grained control over the formatting of the tree.
Like tikz-qtree, it is based on TikZ, allowing you to overlay additional drawings over the tree structure.
For an easy introduction, see the [quickstart guide][forest-quickstart] on CTAN.

[forest]: https://www.ctan.org/pkg/forest
[forest-quickstart]: https://www.ctan.org/pkg/forest-quickstart
[jssyntaxtree]: https://ironcreek.net/syntaxtree/
[overleaf]: https://www.overleaf.com/
[tikz]: https://www.ctan.org/pkg/tikz-qtree
[tikz-qtree]: https://www.ctan.org/pkg/tikz-qtree
