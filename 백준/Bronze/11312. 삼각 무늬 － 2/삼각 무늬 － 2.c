#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long tri(long long n) {

    if (n == 0)

        return 0;

    return n * 2 - 1 + tri(n - 1);

}

int main() {

    long long t, a, b, n;

    scanf("%lld", &t);

    while (t--) {

        scanf("%lld %lld", &a, &b);

        n = a / b;

        printf("%lld\n", tri(n));

    }

    return 0;

}