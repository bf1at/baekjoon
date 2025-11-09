#include <stdio.h>

int main() {

    int n, t, b, tmax=0, bmin=5000;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d %d",&t,&b);

        if(t>tmax)

            tmax=t;

        if(b<bmin)

            bmin=b;

    }

    printf("%d",tmax*bmin%7+1);

    return 0;

}