#include <stdio.h>

int main() {

    long long n;

    scanf("%lld",&n);

    long long minDiv=n, maxDiv=n-1;

    for(int i=2;i<n;i++){

        if(n%i!=0){

        minDiv=i;

        break;

        }

    }

    printf("%lld %lld",minDiv, maxDiv);
    return 0;
}