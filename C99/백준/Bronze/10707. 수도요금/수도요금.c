#include <stdio.h>

int main() {
    int a,b,c,d,p,x,y;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&p);
    x=p*a;
    y=b;
    if(p>c)
        y+=(p-c)*d;
    if(x<y)
        printf("%d",x);
    else
        printf("%d",y);
    return 0;
}