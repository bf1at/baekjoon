#include <stdio.h> 

int main() {     

    double a, b;

    int h, m;   

    scanf("%lf %lf",&a,&b);   

    h=(int)(b/a*24);

    m=(int)(b/a*24*60)%60;

    printf("%02d:%02d",h,m);     

    return 0; 

}