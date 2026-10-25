#include<stdio.h>
int main(){
    int num, digit=0,length=0,temp, temp_num;

    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;

    while(temp > 0){
        length += 1;
        temp /= 10;
    }

    for(int i=0; i<= length; i++){
        temp_num = num / 10;
        
    }
    return 0;
}