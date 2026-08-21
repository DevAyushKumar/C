Function parameters:
-> No argument, no return value
-> Argument, no return value
-> No argument, return value
-> Argument, return value

What are acutal and formal parameters ?
-> Actual parameters:
The parameters that are passed while calling or invoking the function/meathod is called actual parameters.

-> Formal parameters:
The parameters which are passed to the function at the time of function defination/declaration is called formal parameters.

What is call by value ?
-> In call by value, the values of the actual parameters are copied into the formal parameters.

Note:
Any changes made inside the function do not affect the original variable of main function.

What is called by address ?
-> In call by address, the address of variable is passed to the function call like an actual parameter.

Note:
If we change the value of formal parameters then the value of actual parameter will also change.

Difference between call by value and call by address ?
-> Call by value:
1. In function call, we pass the value of variable.
2. If we change copy of variable, the original value dosen't change.
3. Value of variable are passed using simple techniques.
4. Both actucal and formal parameters are stored in different memory locations.

-> call by address:
1. We pass the address of variable.
2. If we change value of variable original value will also change outside function.
3. Value of variable are passed using pointer variable to store address.
4. Both actual and formal parameters are stored in same memory locations.