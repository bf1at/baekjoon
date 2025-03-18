#include <stdio.h>

#include <math.h>

int main() {

    int n,x=0,y=0,z=0,xs=0,ys=0,zs=0;

    scanf("%d",&n);

    while(n--){

        xs=0,ys=0,zs=0;

        for(int i=0;i<10;i++){

            scanf("%d %d %d",&x,&y,&z);

            xs+=x;

            ys+=y;

            zs+=z;

        }

        printf("%.0lf %.0lf %.0lf\n",round(xs/10.0),round(ys/10.0),round(zs/10.0));

    }

    return 0;

}