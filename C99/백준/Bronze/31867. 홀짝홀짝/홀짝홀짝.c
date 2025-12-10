#include <stdio.h>

int main() {
    char s[6000000];
    int n, odd=0,even=0;
    scanf("%d %s",&n,s);
    for(int i=0;i<n;i++){
        if((s[i]-'0')%2==0)
            even++;
        else
            odd++;
    }
    if(even>odd)
        printf("0");
    else if(even==odd)
        printf("-1");
    else
        printf("1");
    return 0;
}