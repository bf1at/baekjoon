#include <stdio.h>

int main() {

    int s,c,o,n;

    scanf("%d %d %d %d",&s,&c,&o,&n);

    s+=n;

    c+=o*2;

    s/=3;

    c/=6;

    if(s<c)

        printf("%d",s);

    else

        printf("%d",c);

    return 0;

}