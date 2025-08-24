#include <stdio.h>

int main() {

    long long n;

    scanf("%lld",&n);

    if(n%2==1)

        printf("0");

    else if(n%4==2)

        printf("1");

    else

        printf("2");

    return 0;

}