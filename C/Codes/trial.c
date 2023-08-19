#include <stdio.h>



int main (void){
    int x=5;
    int *pX=&x;
    printf("x  %%d = [%d]\n",x);
    printf("x  %%d = [%d]\n",*pX);
    printf("px %%p = [%p]\n",(void *)&x);
    printf("px %%p = [%p]\n",(void *)pX);
    printf("px %d \n",sizeof(pX));
    printf("px %d \n",(int)sizeof(pX));
    return 0;
}


