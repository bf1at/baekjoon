#include <stdio.h>

int main() {
    long long a, t;
    scanf("%lld", &a);
    if (a%5==0)
        t=a/5;
    else
        t=a/5+1;
    printf("%d", t);
    return 0;
}
