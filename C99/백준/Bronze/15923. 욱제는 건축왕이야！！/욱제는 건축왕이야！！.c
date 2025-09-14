#include <stdio.h>

#include <math.h>

int main() {

    int n,x[20],y[20],sum=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d %d",&x[i],&y[i]);

        if(i>=1)

            sum+=sqrt((x[i]-x[i-1])*(x[i]-x[i-1])

                +(y[i]-y[i-1])*(y[i]-y[i-1]));

    }

    sum+=sqrt((x[0]-x[n-1])*(x[0]-x[n-1])

                +(y[0]-y[n-1])*(y[0]-y[n-1]));

    printf("%d",sum);

    return 0;

}