#include <stdio.h>

int main(){

    int a,b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    if(a > b){
        printf("The first number %d is greater than second %d", a,b);
    } else {
        printf("The second number %d is greater than first number %d", b,a);
    }
    return 0;
}