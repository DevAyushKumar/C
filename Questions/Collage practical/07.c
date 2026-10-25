#include<stdio.h>

int main(){

    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second nunber: ");
    scanf("%d", &b);

    printf("The sum of %d and %d is %d \n", a,b, a+b);
    printf("The subtraction of %d and %d is %d \n", a,b,a-b);
    printf("The multiplication of %d and %d \n", a,b,a*b);
    printf("The division of %d and %d is %d \n", a,b,a/b);
    printf("The modulus of %d and %d is %d \n", a,b,a%b);

    return 0;
}