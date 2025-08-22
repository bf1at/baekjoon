#include <stdio.h>

int main() {

    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if((c-a)%b==0&&(c-a)/b>=0)

        printf("%d",(c-a)/b+1);

    else

        printf("X");

    return 0;

}