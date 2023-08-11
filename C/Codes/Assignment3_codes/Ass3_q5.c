#include <stdio.h>

#define Arr_size 6
#define input 4

int linearSearch(int numbers_size, int* numbers,int target);

int main (void){
    int Array [Arr_size]={1,2,3,2,4,4};
    printf("the index of elemets in the array is = [%d]",linearSearch(Arr_size,Array,input));
}


int linearSearch(int numbers_size, int* numbers,int target){
    for (int i=0;i<numbers_size;i++){
        if(numbers[i]==target){
            return i;
        }
    }
    return -1;
}