#include<stdio.h>
#include<string.h>

int main(){

    char ch[100];

    printf("Enter the string: ");
    scanf("%s", &ch);

    int flag = 0;

    int length = strlen(ch) - 1;
    
    for(int i=0; i < length; i++, length--){
        if(ch[i] != ch[length]){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        printf("The string is palindrome");
    } else {
        printf("The string is not a palindrome");
    }
    return 0;
}