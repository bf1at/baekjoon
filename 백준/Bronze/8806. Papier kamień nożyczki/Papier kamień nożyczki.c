#include <stdio.h>

int main() { //rock scissors paper

    double a1,a2,a3,b1,b2,b3;

    int n;

    scanf("%d",&n);

    while(n--){

        scanf("%lf %lf %lf ",&a1,&a2,&a3);

        scanf("%lf %lf %lf ",&b1,&b2,&b3);

        double awin = a1*b2+a2*b3+a3*b1;

        double bwin = b1*a2+b2*a3+b3*a1;

        if(awin>bwin)

            printf("ADAM\n");

        else if(awin==bwin)

            printf("=\n");

        else

            printf("GOSIA\n");

    }

    return 0;

}