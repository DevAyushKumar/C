#include <stdio.h>
#include<math.h>

//library function
void fun1(){
    int a=10;
    int b=5;
    printf("%d", sqrt(a));
}

//user defined function 
void fun2(){
    printf("its a user defined function");
}

//main function
int main(){
    fun1();
    fun2();
    return 0;
}