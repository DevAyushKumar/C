#include<stdio.h>
int main(){
    int num;
    printf("Enter the numeber: ");
    scanf("%d", &num);
    printf("The size of num is %d \n", sizeof(num));
    //Typecastiing
    double a=num;
    printf("The size of num is: %d \n", sizeof(a));
    return 0;
}