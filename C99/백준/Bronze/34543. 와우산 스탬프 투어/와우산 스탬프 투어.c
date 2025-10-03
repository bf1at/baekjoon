#include <stdio.h>

int main() {

    int n,w,s=0;

    scanf("%d %d",&n,&w);

    s+=n*10;

    if(n>=3)

        s+=20;

    if(n==5)

        s+=50;

    if(w>1000)

        s-=15;

    if(s<0)

        s=0;

    printf("%d",s);

    return 0;

}