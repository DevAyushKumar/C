Linker:
-> It combines object files object files and libraries into single executable files.

Header:
-> header is a program that takes .exe code from linker and loades in to main memory.

Preprocessor directive:
-> preprocessive starts process before the compiler and preprocessor directive beginning with #incldue #define

-> It can include files, replace macros, etc.

File explanation:
1. Short info of program 
-> Documentation section

2. #include <stdio.h>
link / file section

3. #define pi 3.14
defination section

4. int x = 100
global section

5. int main()
main function section

Macro:
-> Macros are the name or small pieces of code that are defined using the #define preprocessor directive.

Note:
Preprocessor will replace the name with value before code compliation

Advantages:
-> Code reusability 
-> Maintenance 
-> reliability

Types of macro:
1. User defined
-> Object like micro 
-> Function like main

2. pre define 
-> -DATE
-> -TIME
-> -FILE

Object like macro:
It will replace only a value

Function like macro:
It takes argument and replace them with code.
ex: #define square (x) ((x)*(x))

purpose: It improves performace, pre processor replaces macro call with its code directly and avoid function call.