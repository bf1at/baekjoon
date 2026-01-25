#include <stdio.h>

int main() {

    long long a,b,c,n,sum=0;

    scanf("%lld %lld %lld %lld",&a,&b,&c,&n);

    sum+=n/2*(b+2*c);

    sum+=n%2*(a+b+c);

    printf("%lld",sum);

    return 0;

}