#include <stdio.h>

//structure
struct student {
    int roll;
    char name[20];
    float marks;
};

//union
union stud {
    int a;
    float b;
};

//main function
int main(){

    //structure declare
    struct student s1 = {150, "Ayush", 99.9};

    //access
    printf("%d \n", s1.roll);
    
    //union 
    union stud s2 = {12};
    printf("%d \n", s2.a);

    return 0;
}