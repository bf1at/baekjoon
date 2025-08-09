#include <stdio.h>

#include <math.h>

int main() {

    int a,b;

    scanf("%d %d",&a,&b);

    if((a*a-b)==0)

        printf("%d",0-a);

    else

        printf("%.lf %.lf",0-a-sqrt(a*a-b),0-a+sqrt(a*a-b));

    

    return 0;

}