#include <stdio.h>
int main(void){
    int a;
    char b;
    float c;
    double d;
    printf("The size of integer is: %d \n", sizeof(a));
    printf("The size of character is: %d \n", sizeof(b));
    printf("The size of float is: %d \n", sizeof(c));
    printf("The size of double is: %ld \n", sizeof(d));
    return 0;
}