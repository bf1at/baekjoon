#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, a, b, c, r,max=0;
    scanf("%d", &n);
    for(int i = 0;i<n;i++){
        scanf("%d %d %d", &a,&b,&c);
        if(a==b&&b==c)
            r=10000+a*1000;
        else if(a==b||a==c)
            r=1000+a*100;
        else if(b==c)
            r=1000+b*100;
        else{
            if (a>b&&a>c)
                r=a*100;
            else if(b>a&&b>c)
                r=b*100;
            else
                r=c*100;
        }
        if(r>max)
            max=r;
    }
    printf("%d",max);
    return 0;
}