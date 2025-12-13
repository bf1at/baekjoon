#include <stdio.h>

int main() {

    int p,c;

    scanf("%d %d",&p,&c);

    if(p>c)

        printf("%d",c*2+1);

    else

        printf("%d",p*2-1);

    return 0;

}