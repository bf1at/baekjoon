#include <stdio.h>

int main() {

    long long n,m, sum=0,k=1;

    scanf("%lld %lld",&n,&m);

    for(long long i=1;i<=m+1;i++){

        sum+=k;

        k+=n-2;

    }

    printf("%lld",sum);

    return 0;

}