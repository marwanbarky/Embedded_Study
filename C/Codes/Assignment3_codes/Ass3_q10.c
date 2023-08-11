#include <stdio.h>
 
 
void upper_to_lower(char* s)
{
    for(int i=0;s[i]!='\0';i++){
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32; // Convert uppercase to lowercase by adding 32 check ascii table
        }
    }
    printf("The output is [%s]", s);
}

int main (void){
    char str[20]="GGiGor";
    upper_to_lower(str);
    return 0;
}

