# CS280-Programming-Assignment-0

CS280 Programming Assignment 0
Fall 2018
Due September 19 before midnight

This assignment is mostly designed to help get you used to the Vocareum system.

Write a C++ program that loops through all of the command line arguments that are passed to
the program, beginning with the argument after the program name.

For each argument, examine and then discard its first character. That character will tell you what
your program should do with that argument.

If the first character is the letter S, then skip the argument and print nothing for that argument.

If the first character is the letter L then convert every upper case letter in the argument to lower
case, and print the resulting argument on a line by itself. If a character is not an upper case
letter, then it should be unchanged.

If the first character is the letter U then convert every lower case letter in the argument to upper
case, and print the resulting argument on a line by itself. If a character is not a lower case letter,
then it should be unchanged.

If the first character is the letter r (lowercase r), print the letters in reverse order.

If the first character is the letter R, print the letters in reverse order while ALSO converting any
lower case letters to upper case.

If the first character is not one of the characters mentioned above, then print the word FAIL

Note that it is possible, and valid, for there to be no command line arguments after the first
command line argument.

Examples:
$ ./prog0 Smile, you people!
FAIL
FAIL

$ ./prog0 LHelp UmY34!$xxx run
help
MY34!$XXX
nu 
