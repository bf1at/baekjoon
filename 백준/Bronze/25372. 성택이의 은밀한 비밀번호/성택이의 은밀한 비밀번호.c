#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char s[21];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%s",s);
        if(strlen(s)>5&&strlen(s)<10)
            printf("yes\n");
        else
            printf("no\n");
     }
    return 0;
}