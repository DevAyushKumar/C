#include <stdio.h>

//break statement
void breakstatement(){
    for(int i=0; i<5; i++){
        if (i<4){
            break;
        }
        printf("%d", i);
    }
}

//continue statement
void continuestatement(){
    for(int i=0; i<5; i++){
        if(i==4){
            continue;
        }
        printf("%d",i);
    }
}

//goto statement
void gotostatement(){
    for(int i=0; i<5; i++){
        if (i<0){
            goto negative;
            printf("positive number");
        }
        negative:
        printf("negative number");
    }
}

//return statement
int returnstatement(int a, int b){
    return a+b;
}

//main function
int main(){

    //function calling
    breakstatement();
    continuestatement();
    gotostatement();
    returnstatement(5,5);
    return 0;
}