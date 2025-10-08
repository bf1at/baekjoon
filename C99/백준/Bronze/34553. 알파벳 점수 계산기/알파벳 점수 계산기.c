#include <stdio.h>
#include <string.h>

int main() {
    char s[100001];
    scanf("%s",s);
    int sum=1;
    int a=1;
    for(int i=1;i<strlen(s);i++){
        if(s[i]>s[i-1])
            a++;
        else
            a=1;
        sum+=a;
    }
    printf("%d",sum);
    return 0;
}