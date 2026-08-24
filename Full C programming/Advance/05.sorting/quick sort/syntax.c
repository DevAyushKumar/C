#include <stdio.h>

//quicksort function
void quicksort(int a[], int low, int high);

//main function
int main(){
    int n, low, high, pivot, temp;

    //size
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];

    //input items
    for(int i=0; i<n; i++){
        printf("Enter the values in the array: ");
        scanf("%d", &a[i]);
    }

    //sorted array
    quicksort(a, 0, n-1);

    printf("The sorted array: ");
    for(int i=0; i<n; i++){
        printf("%d,", a[i]);
    }

    return 0;
}

//quicksort callback
void quicksort(int a[], int low, int high){
    
    //sorting meathod
    if(low < high){
        int pivot = a[high];
        int i = low -1, temp;
        for(int j=low; j <= high-1; j++){
            if (a[j] < pivot){
                ++i;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

            temp = a[i+1];
            a[i+1] = a[high];
            a[high] = temp;

            quicksort(a, low, i);
            quicksort(a, i+2, high);
        }
    }
}