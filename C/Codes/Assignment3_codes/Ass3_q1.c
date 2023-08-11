#include <stdio.h>

#define Arr_size 5

int summation(int numbers_size, int* numbers);

int main (void){
    int Array [Arr_size]={1,1,1,1,5};
    printf("the summation of elemets of the array is = [%d]",summation(Arr_size,Array));
}


int summation(int numbers_size, int* numbers){
    int sum=0;
    for (int i=0;i<numbers_size;i++){
        sum+=numbers[i];
    }
    return sum;
}