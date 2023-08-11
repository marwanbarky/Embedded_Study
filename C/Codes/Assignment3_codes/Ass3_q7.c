#include <stdio.h>

#define Arr_size 5

int termFinder(int termNumber);

int main (void){
    printf("the nth term of series is = [%d]",termFinder(100));
}


int termFinder(int termNumber){
    int term=-1;
    for(int i=1;i<=termNumber;i++){
        term+=2;
    }
    return term;
}