#include <stdio.h>

long long factor(long long n){

    if(n<=1)

        return 1;

    else

        return n*(factor(n-1));

}

int main() {

    long long n;

    scanf("%lld",&n);

    printf("%lld",factor(n));

    return 0;

}