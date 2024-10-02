#include <stdio.h>

int main() {
    int a,b,c,n;
    scanf("%d %d %d", &a, &b, &c);
    if(b-a>c-b)
        n=b-a-1;
    else
        n=c-b-1;
    printf("%d",n);
    return 0;
}