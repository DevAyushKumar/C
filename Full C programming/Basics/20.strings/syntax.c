#include <stdio.h>

//main function
int main(){
    char name[10] = {'A', 'Y', 'U', 'S', 'H','\0'};
    char *nome = "programming";
    
    for(int i=0; i<5; i++){
        printf("%c", name[i]);
    }
    printf("\n");
    for(int i=0; i<=10; i++){
        printf("%c", nome[i]);
    }
    return 0;
}