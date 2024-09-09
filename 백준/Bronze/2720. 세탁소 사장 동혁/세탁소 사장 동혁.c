#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, change,a,b,c,d;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&change);
        a=change/25;
        change%=25;
        b=change/10;
        change%=10;
        c=change/5;
        d=change%5;
        printf("%d %d %d %d\n",a,b,c,d);
    }
    return 0;
}