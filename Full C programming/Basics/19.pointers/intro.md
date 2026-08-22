What is pointer ?
-> poiner is a special type of variable that stores the memory address of another variable.

Syntax:
datatype *ptr_name;

Note:
It always us to indirectly access and manipulate the data at the address.

Pointer usecase:
-> Dynamic memory allocation
-> Access array elements efficiently
-> We can change the varaible value inside function using call by address
-> Data structure

What is void pointer ?
-> A pointer is declared by the help of 'void' keyword is called void pointer.
-> It can hold any type of address.
-> The size of void pointer is 2 bytes
-> It is also known as generic pointer.

What is null pointer ?
-> A pointer variable that is initialize with the NULL value at the time of pointer declaration is called NULL pointer.
The NULL pointer that dosen't point to any memory location

What is wild pointer ?
-> A pointer variable that not initialized with any address is called wild pointer.
-> Wild pointer is also known as bad pointer because it holds the address of random memory location.

What is pointer to pointer ?
-> A pointer variable which helds a address another pointer variable is called pointer to pointer.
-> We can implement the pointer to pointer operation upto 12 stages.
-> If we verify with more pointer to pointer variable then the execution of program will be slow.

What is dangling pointer ?
-> If a pointer variable holds the address of in active area location is called dangling pointer.

What is function pointer ?
-> A pointer variable that holds the address of function is known as function pointer.
