#include <stdio.h>

int main() {
    double a, b;
    while(~scanf("%lf %lf",&a,&b)){
        printf("%.2lf\n",a/b);
    }
    return 0;
}