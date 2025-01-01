#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char n[11];
    scanf("%s",n);
    for(int i=0;i<strlen(n);i++){
        if(n[i]=='7'){
            if(atoi(n)%7==0)
                printf("3");
            else
                printf("2");
            return 0;
        }
    }
    if(atoi(n)%7==0)
        printf("1");
    else
        printf("0");
    return 0;
}