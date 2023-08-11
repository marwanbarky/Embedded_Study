#include <stdio.h>

int Isdistinct(char* string);

int main (void){
    printf("Is Distinct = [%d]",Isdistinct("Marwn"));
}


int Isdistinct(char* string){
    int distinct=1;
    for(int i=0;string[i]!='\0';i++){
        for(int j=0;string[j]!='\0';j++){
            if(j==i){
                continue;
            }
            else{
                if(string[i]==string[j]){
                    return 0;
                }
            }
        }
    }
    return distinct;
}