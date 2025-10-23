#include <stdio.h>

int main() {
    int sum=0;
    double w,n;
    scanf("%lf %lf",&w,&n);
    sum+=w*5280/n;
    printf("%d",sum);
    return 0;
}