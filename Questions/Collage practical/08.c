#include<stdio.h>

int main(){

    int a,b;
    char ch;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter what type of expression you want to perform +,-,*,/: ");
    scanf("%c", &ch);

    switch(ch){
        case '+': 
        printf("The sum of %d and %d is %d", a,b,a+b);
        break;

        case '-': 
        printf("The subtraction of %d and %d is %d", a,b,a-b);
        break;
        
        case '*': 
        printf("The multiplication of %d and %d is %d",a,b,a*b);
        break;

        case '/': 
        printf("The division of %d and %d is %d",a,b,a/b);
        break;

        default: printf("Enter a valid operator");
    }

    return 0;
}