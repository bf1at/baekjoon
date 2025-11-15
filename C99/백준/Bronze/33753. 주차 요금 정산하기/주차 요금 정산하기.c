#include <stdio.h>

#include <math.h>

int main() {

    double a,b,c;

    int t;

    scanf("%lf %lf %lf %d",&a,&b,&c,&t);

    if(t<=30)

        printf("%.lf",a);

    else{

        b=ceil((t-30)/b);

        printf("%.lf",a+b*c);

    }

    return 0;

}