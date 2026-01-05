#include <stdio.h>

int main() {

    long long n,m;

    scanf("%lld",&n);

    for(int i=0;i<n;i++){

        scanf("%lld",&m);

        long long km[100],dm[100],am[100],k,d,a;

        for(int j=0;j<m;j++){

            scanf("%lld %lld %lld",&km[j],&dm[j],&am[j]);

        }

        scanf("%lld %lld %lld",&k,&d,&a);

        long long sum = 0;

        for(int j=0;j<m;j++){

            long long s=km[j]*k-dm[j]*d+am[j]*a;

            if(s<0)

                s=0;

            sum+=s;

        }

        printf("%lld\n",sum);

    }

    return 0;

}