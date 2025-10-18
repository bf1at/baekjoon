#include <stdio.h>

int main() {

    double a,b,c;

    scanf("%lf %lf %lf",&a,&b,&c);

    if(a*3.14159/b>=c)

        printf("YES");

    else

        printf("NO");

    return 0;

}