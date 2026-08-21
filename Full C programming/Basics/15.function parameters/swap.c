#include<stdio.h>

void swap(int a, int b){
    int temp;
    temp=b;;
    b=a;
    a=temp;
    printf("%d is %d now \n", a,b);
}

int main(){
    int a,b;
    
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    swap(a,b);
    printf("The original numbers are: %d and %d", a,b);
    return 0;
}