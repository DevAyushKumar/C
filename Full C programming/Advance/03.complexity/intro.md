Algorithm complexity (performace):
-> Algorithm complexity refers to the analysis of an algorithm and performace in term of time and space requirement as a function of input size.

1) Space complexity:
-> Total amount of memory required by an algorithm for its complete execution called space complexity.

a) constant space complexity:
int sqrt(int n){
    return (n*n);
}
8 bytes of memory reserved

b) Linear space complexity:
int add(int arr[], int n){
    int sum = 0,i;
    for(i=0; i<n; i++){
        sum = sum + arr[i];
        return sum;
    }
}
4n+16 bytes

2) time complexity:
Total amount of time required by an algorithm to its complex execution called time complexity.

a) Constant time complaxity
int sqrt(int n){
    return n*n;
}
n*n = 1 unit of time
return = 1 unit of time

b) Linear time complexity
int add(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
        return sum;
    }
}
4n + 4