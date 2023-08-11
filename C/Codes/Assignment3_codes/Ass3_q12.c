#include <stdio.h>

#define Arr_size 6
#define input 4

int stringLength(char* string);

int main (void){
    printf("the index of elemets in the array is = [%d]",stringLength("wow"));
}


int stringLength(char* string){
    int length=0;
    for (int i=0;string[i]!='\0';i++){
        length++;
    }
    return length;
}