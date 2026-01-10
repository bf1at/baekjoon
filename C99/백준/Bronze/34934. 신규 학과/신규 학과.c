#include <stdio.h>
#include <string.h>

int main() {
    int n, y, max=0;
    char s[16], maxs[16];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %d",s,&y);
        if(y>max){
            max=y;
            strcpy(maxs,s);
        }
    }
    printf("%s",maxs);
    return 0;
}