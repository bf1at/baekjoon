#include <stdio.h>
#include <string.h>

int main() {
    char name[101];
    int a[1000]={0};
    char s[10001];
    scanf("%s %s",name,s);
    for(int i=0;i<strlen(name);i++){
        a[name[i]]++;
    }
    for(int i=0;i<strlen(s);i++){
        if(a[s[i]]!=0)
            continue;
        printf("%c",s[i]);
    }
    return 0;
}