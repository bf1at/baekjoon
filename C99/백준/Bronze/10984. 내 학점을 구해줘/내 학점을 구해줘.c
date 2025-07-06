#include <stdio.h>

int main() {

    int t,n,a,ssum;

    double b,sum;

    scanf("%d",&t);

    while(t--){

        sum=0.0; ssum=0;

        scanf("%d",&n);

        while(n--){

            scanf("%d %lf",&a,&b);

            ssum+=a;

            sum+=b*a;

        }

        printf("%d %.1lf\n",ssum,sum/ssum);

    }

    return 0;

}