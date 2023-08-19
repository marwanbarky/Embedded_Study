// (17) Write a C Program for swapping two arrays “A & B” with different lengths. 
// B will be always the smallest array.
// int * Swap (int a_size,int *a,int b_size,int *b)

#include <stdio.h>

#define  A_size 7
#define  B_size 5

void Swap (int a_size,int *a,int b_size,int *b){
    int temp = 0;
    for(int i=0;i<b_size;i++){
        temp=*(a+i);
        *(a+i)=*(b+i);
        *(b+i)=temp;
    }
}

int main (void){
    int A [A_size]={1,2,3,4,5,6,7};
    int B [B_size]={10,20,30,40,50};
    Swap (A_size,A,B_size,B);
    
    printf("the value of Array A : {");
    for(int i=0;i<A_size;i++){
        printf("%d ",*(A+i));
    }
    printf("}\n");

    printf("the value of Array B : {");
    for(int i=0;i<B_size;i++){
        printf("%d ",*(B+i));
    }
    printf("}\n");
    return 0;
}
