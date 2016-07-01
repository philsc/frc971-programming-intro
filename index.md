---
layout: default
title: FRC 971 Programming Intro
---

Overview
================================================================================
This document is divided into several sections. Please navigate to the ones you
are interested in.

Logistics
================================================================================

## SVN Account
Signup page: <http://boardsailor.com/passwordFRC.html>

Michael Schuh will need to manually create an account for you so please be
patient after you fill out the form on that page. You'll receive an e-mail once
your account is created. Then you can log in to the SVN repo and the gerrit
repo below.

### Gerrit Account
Once you have an SVN account, please log into
[gerrit](https://robotics.mvla.net/gerrit/#/) and e-mail Brian that you would
like access to the robot code. This repo contains all of 971's code. The robot
code and our scouting code.

### Git Practice
Creating an account on [GitHub](https://github.com/) is a great way to get
started with using git. This will let you practice version control. They also
have a [desktop client](https://desktop.github.com/) if you don't want to jump
into using the command line right away.

### Google Group
Please apply to our [971 Programmers Google
Group](https://groups.google.com/forum/#!forum/frcteam971programmers). There
you can post questions and have people from 971 help you.

Of course, you can post questions and such on other forums too if you prefer
that.

Game-specific
================================================================================

- [Game animation for 2016](https://www.youtube.com/watch?v=VqOKzoHJDjA)
- [971's 2016 reveal video](https://www.youtube.com/watch?v=CMX4ynSQsyI)
- [2016 game
  manual](http://www.firstinspires.org/resource-library/frc/competition-manual-qa-system)

Getting Started
================================================================================

### IDE
The easiest way to get started is to install an Integrated Development
Envrironment (a.k.a IDE). In general an IDE lets you write code, compile it,
and run it all in one package. For starting with C++, I would recomment
[Code::Blocks](http://www.codeblocks.org/). It's pretty easy to get started
with it and there are quite a few
[tutorials](http://www.cplusplus.com/doc/tutorial/introduction/codeblocks/) out
there. Just search for them.

*Note:* If you're downloading the Windows version make sure to select the MinGW
version. Otherwise you will likely not be able to compile your programs.

### Git
For some introduction on what you can do with git and what it can do for you,
please watch the [introductory videos](https://git-scm.com/videos).

Tasks
================================================================================
You should be able to complete most of these tasks without programming a
Graphical User Interface (a.k.a a GUI). These can be coded up as "console
applications". The idea is to just print words on the screen.

### Fizz Buzz
A classic little puzzle meant to acquaint people with new programming
languages. The challenge is to print out the numbers 1 through 100 on separate
lines. However, if that number is evenly divisible by 3 print the word "Fizz"
instead of that number. When the number is evenly divisible by 5 print the word
"Buzz" instead. If the number is evenly divisible by 3 _and_ 5 then print "Fizz
Buzz" instead.

Here's a piece of code to get you guys started:

{% highlight C++ %}
{% include code/fizz_buzz.cc %}
{% endhighlight %}

### Number Guessing Game
The challenge is to get the computer to generate a random number between 1 and
100 inclusive. Then the player has to guess what the number is. The computer
reads the player's guess and informs the player whether the guess was correct,
too low, or too high. The player then gets another guess if the previous one
was incorrect. Give the player 6 guesses in total.

Here's a piece of code to get you started:

{% highlight C++ %}
{% include code/number_guessing.cc %}
{% endhighlight %}

This is a great opportunity to learn about how to use Google. Figure out how
you gather user input using C++.

### Maze Walking
The challenge is to provide the player with a maze that they can navigate.

More details to follow...
