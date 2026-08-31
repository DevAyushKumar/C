#include<stdio.h>

int main(){
    int num,temp,remainder,reversed;

    printf("Enter the number: ");
    scanf("%d",&num);

    temp = num;

    while(num != 0){
        remainder = num % 10;
        reversed = (reversed * 10) + remainder;
        num /= 10;
    }

    if (temp == reversed){
        printf("The number is a palindrome number");
    } else {
        printf("The number is not a palindrome number");
    }
    return 0;
}