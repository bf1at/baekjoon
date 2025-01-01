#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>10)
        printf("%d",b+24-a);
    else
        printf("%d",b-a);
    return 0;
}