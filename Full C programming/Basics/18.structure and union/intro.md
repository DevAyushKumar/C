What is structure ?
-> Structure in C language comes under secondary (user-defined) datatype that allows you to store multiple variables of different data into single name

Why structure:
1. Before:
char name[20];
int roll;
float marks;

2. After:
struct student = {
    char name[20];
    int roll;
    int marks;
}

Note:
Data becomes organized, redable and managable.

What is union ?
-> Like structure, union also a user-defined datatype that allows different varaiables to share the same memory location.

Note:
Only one member can store value at a time.
Size of union = largest number

Extra:
-> Make program to show union size
-> print union member data

Difference between structure and union ?
Structure:
-> Occupy seperate memory for each members.
-> All members stores value at the same time.
-> Sum of all members size.
-> Used when need to store full record.

Union:
-> They shared memory amoung all the members.
-> Only one member.
-> Size of largest number.
-> Used when limmited memory.