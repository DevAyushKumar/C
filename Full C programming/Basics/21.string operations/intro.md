String operations:
-> print textual message
-> copy text
-> compare 
-> concap (copy)
-> reverse
-> convert upper/lower
-> searcher character/word

Why string:
-> Without string we can only store single character.
-> But real world data needs name, city, email, password, message, etc.

Common string functions:
-> strlen()
-> strcpy()
-> strcat()
-> strcmp()
-> strlwr()
-> strupr()
-> strrev()

Is string mutable and immutable in C ?
-> C does not treat all strings the same way it depends on how they are created and were string is stored.

ex1: char name[] = "programming";
name[0] = "B";
output: Brogramming

ex2: char *name[] = "programming";
name[0] = "B";
output: Undefined behaviour

reason: Stored in ROM, trying to modify it causes runtime error