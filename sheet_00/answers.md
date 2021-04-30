# Sheet 0 - Answers

## Exercise 1

a) Name three large software projects that are developed in C++! (1 P.)
> Mysql Server, Apples OSX, Microsoft Windows

b) Why is there such a great demand for the C++ language? (1 P.)
> It is best suited for large software projects with a high demand for performance

c) How and by whom was C++ created? (1 P.)
> Bjarne Stroustrup

d) Name five characteristics of C++! (1 P.)

> object-oriented, strongly typed, supports generics, low-level, really fast


## Exercise 3

a) Extend the program such that it prints your name as well! (1 P.)

> see program_01.cpp

b)
Write a small program that reads an integer value from the command-line (provided by the user)
into a variable and prints the variable’s value afterwards! Which data type is a reasonable default
when working with integer values? (1 P.)

> integer, see program_02.cpp

Extend the program from b) such that is performs the same procedure but with a real number,
rather than an integer. Which data type is a reasonable default when dealing with floating point
values? (1 P.)

> float, see program_03.cpp

## Exercise 4.
a) What is a compiler and what is its job? (1 P.)

> a compiler translates source code into bits, so a computer can read and understand it. It generates the target program, which then can process input.


b) What is the difference between a compiler and an interpreter? (1 P.)

> an interpreter does not compile the code directly, but can process code and user input simultaniously. The Output happens directly.

c) Convert the number 101101(2C) (two’s complement) into decimal representation. (1 P.)

> 1 + 4 + 8 + 32 = 45

d) Convert −42(10) into 8-bit 2C representation. (1 P.)

```
42 - 1 = 42
42 two's complement => 0101001
negate 101001 =>       1010110
set highest bit to 1 => 11010110
```