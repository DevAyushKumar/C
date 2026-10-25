#include<stdio.h>

int main(){

    int num;
    long int fact = 1;

    printf("Enter the numbeer you want factorial of: ");
    scanf("%d", &num);

    for(int i=1; i<= num; i++){
        fact *= i;
        printf("%d \t", fact);
    }

    return 0;
}