#include<stdio.h>

int main(){
    
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    if(a%2 == 0){
        printf("The number you entered is an even number");
    } else {
        printf("The number you entered is an odd number");
    }
    
    return 0;
}