#include <stdio.h>

int main(){

    int n, temp;

    //size
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];

    //enter values
    for(int i=0; i<n; i++){
        printf("Enter the values in array: ");
        scanf("%d", &a[i]);
    }

    //sorting
    for(int i=0; i<n; i++){
        for(int j=i; j>=1; j--){
            if(a[j-1] > a[j]){
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
        }
    }

    //return resutl
    printf("The sorted array is: ");
    for(int i=0; i<n; i++){
        printf("%d,", a[i]);
    }
    return 0;
}