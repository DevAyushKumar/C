#include <stdio.h>
#define MAX_SIZE 3
int queue[MAX_SIZE];
int front = -1, rear = -1;

//main function
int main(){

    int choice, item;
    printf("1.Enqueue \n2.Dequeue \n3.Display \n4.exit \n");

    while(1){
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            
            case 1:
            if(rear == MAX_SIZE -1 ){
                printf("Overflow and exit \n");
            } else {
                printf("Enter the element: ");
                scanf("%d", &item);

                if (front == -1){
                    front = rear = 0;
                } else {
                    rear++;
                }

                queue[rear] = item;
                printf("item inserted \n");
            }
            break;

            case 2:
            if(front == -1){
                printf("underflow and exit");
            } else {
                item = queue[front];
                if(front = rear){
                    front = rear = -1;
                } else {
                    front++;
                }
                printf("Item deleted \n");
            }
            break;

            case 3:
            if(front == -1){
                printf("Queue is empty");
            } else {
                printf("Queue elements: ");
                for(int i=front; i<=rear; i++){
                    printf("%d", queue[i]);
                }
                printf("\n");
            }
            break;

            case 4:
            printf("exit \n");
            return 0;

            default:
            printf("Invalid choice \n");
        }
    }
}