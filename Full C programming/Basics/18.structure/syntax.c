#include <stdio.h>

//structure
struct student {
    int roll;
    char name[20];
    float marks;
};

//main function
int main(){

    //structure declare
    struct student s1 = {150, "Ayush", 99.9};

    //access
    printf("%d", s1.roll);
    
    return 0;
}