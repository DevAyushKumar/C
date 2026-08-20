#include <stdio.h>

//if statement
void ifstatement(){
    int i=0;
    if(i==0){
        printf("False boolean");
    }
}

//if else statement
void ifelse(){
    int i=0;
    if(i==0){
        printf("false boolean");
    } else {
        printf("true boolean");
    }
}

//if-else-if statement
void ifelseif(){
    int i=0;
    if (i==0){
        printf("false boolean");
    } else {
        printf("true boolean");
    } if (i==2){
        printf("interger enterd");
    } else {
        printf("please enter a boolean expression");
    }
}

//switch statement
void switchstatement(){
    int i=4;
    switch(i){
        case 1:
        printf("case 1");
        break;
        case 2:
        printf("case 2");
        break;
        case 3:
        printf("case 3");
        break;
        case 4:
        printf("case 4");
        break;
        default:
        printf("Please enter a valid choice");
    }
}

//main function
int main(void){
    
    //function call
    ifstatement();
    ifelse();
    ifelseif();
    switchstatement();
    return 0;
}