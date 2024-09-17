#include <stdio.h>
#include <string.h>

int main() {
    char code[5][11], fbi[]="FBI";
    int check=0;
    for(int i=0;i<5;i++){
        scanf("%s", code[i]);
    }
    for(int i=0;i<5;i++){
        if (strstr(code[i],fbi)!=NULL){
            printf("%d ", i+1);
            check++;
        }
    }
    if (check==0)
        printf("HE GOT AWAY!");
    return 0;
}