#include <stdio.h>

#include <math.h>

int main() {

    double d;

    int rH, rV;

    double dpiH, dpiV, w, h;

    while(1){

        scanf("%lf %d %d",&d,&rH,&rV);

        if(d==0&&rH==0&&rV==0)

            break;

        w=16*d/sqrt(337);

        h=9.0/16*w;

        dpiH=rH/w;

        dpiV=rV/h;

        printf("Horizontal DPI: %.2f\n",dpiH);

        printf("Vertical DPI: %.2f\n",dpiV);

    }

    return 0;

}