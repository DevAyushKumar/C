#include<stdio.h>
void pri(){
    static int x = 10;
    printf("%d \n",x);
    x+1;
}
int main(){
    pri();
    pri();
    pri();
    return 0;
}