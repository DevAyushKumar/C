#include <stdio.h>

void main(){

    int a[5] = {10,20,30,40,50};
    int start=0, end = 4, mid, item, f=0;

    printf("Enter searching item: ");
    scanf("%d", &item);

    while (start <= end) {
        mid = (start + end)/2;

        if (a[mid] == item) { 
            f = 1;
            break;
        } 
        if (a[mid] < item) {

            start = mid + 1;
        } else {
            
            end = mid - 1;
        }
    }

        if(f == 1){

            printf("item found at %d", mid);
        } else {

            printf("Item not found");
        }
}