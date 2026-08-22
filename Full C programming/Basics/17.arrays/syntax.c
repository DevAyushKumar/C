#include<stdio.h>

//array
void fun1(){
    int arr[5] = {1,2,3,4,5};
    for(int i=0; i<5; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}

//1D array
void fun2(){
    int arr[5] = {1,2,3,4,5};
    for(int i=0; i<5; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}


//2D array
void fun3(){
    int arr[2][3] = {{1,2,3},{4,5,6}};
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d", arr[i][j]);
        }
    }
}

//main function
int main(){
    fun1();
    fun2();
    fun3();
    return 0;
}