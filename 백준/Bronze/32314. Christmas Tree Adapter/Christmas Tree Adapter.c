#include <stdio.h>

int main() {
    long long a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(b/c>=a)
        printf("1");
    else
        printf("0");
    return 0;
}