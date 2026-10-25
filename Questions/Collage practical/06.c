#include<stdio.h>
int main(){
    int num, digit=0,length=0,temp, sum =0, rem;

    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;

    while(temp > 0){
        length += 1;
        temp /= 10;
    }

    for(int i=0; i<= length; i++){
        rem = num % 10;
        sum += rem;
        num = num / 10;
    }

    printf("The sum of digits is %d", sum);

    return 0;
}