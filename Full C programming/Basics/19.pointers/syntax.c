#include <stdio.h>

//pointer example
void fun1(){
    int a=10,*ptr;
    ptr = &a;
    printf("%d \n", a);
    printf("%d \n", &a);
    printf("%d \n", ptr);
    printf("%d \n", *ptr);
}

//null pointer
void fun2(){
    int a=10,*ptr;
    ptr = '\0';
}

//wild pointer
void fun3(){
    int *ptr;
}

//dangling pointer
void fun4(){
    int *ptr;
    int a=5;
    ptr = &a;
}

//function pointer
void fun5(int *ptr){
    printf("%d", ptr);
}

//main function 
int main(){
    int *ptr;

    fun1();
    fun2();
    fun3();
    fun4();
    fun5(ptr);

    return 0;
}