#include <stdio.h>

int main() {

    int w,h,r;

    scanf("%d %d %d",&w,&h,&r);

    double pi=3.141592653589793;

    printf("%lf",(double)(w*h)-pi*r*r/4);

    return 0;

}