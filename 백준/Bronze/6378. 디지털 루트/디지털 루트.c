#include <stdio.h>
#include <string.h>

char* dr(char* n){
    if(strlen(n)<=1)
        return n;
    int sum=0;
    for(int i=0;i<strlen(n);i++)
            sum+=n[i]-48;
    char n1[1000];
    sprintf(n1, "%d", sum);
    return dr(n1);
}

int main() {
    while(1){
        char n[1001];
        int r, sum=0;
        scanf("%s",n);
        if(strcmp(n,"0")==0)
            break;
        printf("%s\n",dr(n));
    }
    return 0;
}