#include<stdio.h>

void fact(int);

int main(){
    int num;
    printf("Enter the number you want factorial of: ");
    scanf("%d", &num);

    fact(num);
    return 0;
}

void fact(int num){
    int sum = 1;
    for(int i=1; i<= num; i++){
        sum = sum * i;
        printf("%d\t", sum);
    }
}