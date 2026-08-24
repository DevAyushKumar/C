#include <stdio.h>

//main function
int main(){
    int n,m, loc, temp;

    //size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];

    //input number
    for(int i=0; i<n; i++){
        printf("Enter the numbers in array: ");
        scanf("%d", &a[i]);
    }

    for(int i=0; i< n-1; i++){
        m=a[i];
        loc = i+1;
        for(int j=i+1; j<n; j++){
            if(m>a[j]){
                m = a[j];
                loc = j;
            }
        }

        if(a[loc] < a[i]){
            temp = a[loc];
            a[loc] = a[i];
            a[i] = temp;
        }
    }

    //return array
    printf("The sorted array is: ");
    for(int i; i<n; i++){
        printf("%d", a[i]);
    }
    return 0;
}