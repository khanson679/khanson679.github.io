---
title: Unix Command Line Workshop
layout: default
date: 2021-10-05
---

For SBU Linguistics Skillz Hour, 10/5.

## Getting Started

There should be a terminal program in your applications menu.
- Linux/Gnome: Terminal
- Linux/KDE: Konsole
- Mac: Terminal

The terminal will start with the default shell, which should be `bash`. A command prompt should appear. For me it looks like this:

> kenneth@X250-Kubuntu:\~$

The parts are as follows:
- username
- computer name
- current directory (\~)
- end of prompt ($)

Tilde (\~) is a shorthand for your home directory. Enter the command `pwd`, which prints the working directory, to confirm this. Following standard convention, I will write just `$` at the start of a command. A line without `$` is sample output.

	$ pwd
	/home/kenneth

There are two types of commands you can use:
- Those that are provided by bash
- Those that are simply executable programs

For the latter, you can type `man PROGRAM` to show its manual page. These are usually quite terse, and you can often find better explanations online. Use the arrow keys to navigate, and `q` to quit.

### Navigating the file system (cd, ls, tree)

Show contents of current directory

	$ ls

Show contents of specific directory

	$ ls DIRNAME

Change to directory, path relative to current.

	$ cd DIRNAME

Change to directory, absolute path from root

	$ cd /path/to/directory
	
Go back to home directory

	$ cd


### Files and folders (touch, mkdir, cp, mv, rm, rmdir)

### Program input and output (echo, cat, more, less, redirection, pipes)

## Things you should know about

### Standard Unix tools (man, grep, find, etc.)

### Text editors (nano, graphical)

### Bash features (history, aliases)

### environment variables (PATH)

## Writing a script

### bash as a programming language

### the "shebang" line (#!/usr/bin/env bash)

### making your script runnable (chmod)
