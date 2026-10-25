#include<stdio.h>

int main(){

    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    if(a == 0){
        printf("The number entered is 0");
    } else if(a > 0){
        printf("The number entered is positive");
    } else if(a < 0){
        printf("the number entered is negative");
    }
    return 0;
}