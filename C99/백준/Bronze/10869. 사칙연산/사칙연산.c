#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
    long long a,b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", a+b);
    printf("%lld\n", a-b);
    printf("%lld\n", a*b);
    printf("%lld\n", a/b);
    printf("%lld\n", a%b);
    return 0;
}