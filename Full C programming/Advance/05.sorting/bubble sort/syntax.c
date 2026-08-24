#include <stdio.h>

int main(){

    int n,temp;

    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++){
        printf("Enter the values in array: ");
        scanf("%d", &a[i]);
    }

    for(int i=n; i>0; i--){
        for(int j=0; j<i-1; j++){
            
            if (a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Sorted result: \n");
    for(int i=0; i<n; i++){
        printf("%d", a[i]);
    }
    
    return 0;
}