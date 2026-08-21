#include <stdio.h>

//local scope
void fun1(){
    int x=10;
}

//lifetime
void fun2(){
    int x=10;//x has a lifetime only while the program is running.
}

//storage class
static a=10;
void fun3(){
    auto int b =20;
    register int c=20;
    static int d=20;
    printf("%d, %d, %d, %d",a,b,c,d);
}

//main function
int main(){
    fun1();
    fun2();
    fun3();
    return 0;
}