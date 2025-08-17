#include <stdio.h>

int main() {

    long long a, n, sum=0;

    scanf("%lld",&n);

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            scanf("%lld",&a);

            sum+=a;

        }

    }

    printf("%lld",sum);

    return 0;

}