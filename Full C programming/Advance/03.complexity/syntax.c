#include<stdio.h>

//Constant space complexity
int sqrt(int n){
    return n*n;
}

//Linear space complexity
int add(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
        return sum;
    }
}

//main function
int main(){
    return 0;
}