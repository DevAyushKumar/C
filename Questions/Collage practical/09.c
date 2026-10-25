#include<stdio.h>
#include<string.h>
int main(){
    char name[10];
    printf("Enter your name: ");
    scanf("%s",&name);

    printf("The name is %s \n",name);
    printf("The length of character is %d \n",strlen(name));

    return 0;
}