#include<stdio.h>

int sum(int a){
    if(a>0){
        return a+sum(a-1);
    } else {
        return 0;
    }
}

//main function
int main(){
    int a;
    
    printf("Enter the recursive number: ");
    scanf("%d", &a);

    printf("%d",sum(a));
    return 0;
}