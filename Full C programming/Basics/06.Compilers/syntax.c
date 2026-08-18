#include<stdio.h>
#define pi 3.14
int main(void){
    int a;
    printf("Enter the radius of circle: ");
    scanf("%d", &a);
    int result;
    result = a*a*pi;
    printf("%d", result);
    return 0;
}