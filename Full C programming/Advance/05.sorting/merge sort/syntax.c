#include<stdio.h>

//merge
void merge(int *arr, int *leftarray, int ls, int *rightarray, int rs){
    
    int i=0, j=0, k=0;

    while (i < ls && j < rs){
        if (leftarray[i] <= rightarray[i]){
            arr[k] = leftarray[i];
            i++;
        } else {
            arr[k] = rightarray[j];
            j++;
        }
        k++;
    }

    while(i < ls){
        arr[k] = leftarray[i];
        i++;
        k++;
    } 
    
    while (j < rs){
        arr[k] = rightarray[j];
        j++;
        k++; 
    }
}

//merge sort
void mergesort(int *arr, int n){
    if (n < 2){
        return;
    }

    int ls = n/2;
    int rs = n-ls;
    
    int leftarray[ls], rightarray[rs], i;

    for(int i=0; i < ls; i++){
        leftarray[i] = arr[i];
    }

    for(int i=ls; i < n; i++){
        rightarray[i-ls] = arr[i];

        mergesort(leftarray, ls);
        mergesort(rightarray, rs);
        merge(arr, leftarray, ls, rightarray, rs);
    }
}

//main function
int main(){

    int i,size;

    //size
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int a[size];

    //values
    for(int i=0; i<size; i++){
        printf("Enter the values in array: ");
        scanf("%d", &a[i]);
    }

    //retrun values
    mergesort(a, size);
    for(int i=0; i<size; i++){
        printf("%d,", a[i]);
    }

    return 0;
}