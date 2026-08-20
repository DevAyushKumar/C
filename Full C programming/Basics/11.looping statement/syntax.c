#include <stdio.h>

//for loop
void forloop(){
    int i;
    for(i=0; i<5; i++){
        printf("For loop \n");
    }
}

//while loop
void whileloop(){
    int i=0;
    while(i<5){
        printf("while loop \n");
        i++;
    }
}

//do-while loop
void dowhile(){
    int i=0;
    do {
        printf("do while loop \n");
        i++;
    } while (i<5);
}

//main function
int main(){

    //function call
    forloop();
    whileloop();
    dowhile();
    return 0;
}