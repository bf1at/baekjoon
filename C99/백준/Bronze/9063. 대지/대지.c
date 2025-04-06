#include <stdio.h>

int main() {

    int x, y, n;

    int xmax=-10000,xmin=10000;

    int ymax=-10000,ymin=10000;

    scanf("%d",&n);

    while(n--){

        scanf("%d %d",&x,&y);

        if(x>xmax)

            xmax=x;

        if(x<xmin)

            xmin=x;

        if(y>ymax)

            ymax=y;

        if(y<ymin)

            ymin=y;

    }

    printf("%d",(xmax-xmin)*(ymax-ymin));

    return 0;

}