#include <stdio.h>
#define MAX_SIZE 3
int stack[MAX_SIZE];
int top = -1, rear = -1;

//main function
int main(){
    int choice, item;

    printf("1. Push \n 2. Pop \n 3. Display \n 4. Exit");
    while(1){
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
            printf("Enter the value to push: ");
            scanf("%d", &item);

            push(item);
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            exit();

            default:
            printf("Please enter a valid option");
        }
    }
    return 0;
}

void push(int item){
    if(top == MAX_SIZE - 1){
        printf("Overflow and exit \n");
    } else {
        stack[++top] = item;
        printf("item inserted");
    }
}

void pop(){
    
}