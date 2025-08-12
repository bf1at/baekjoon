#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    long long n, flag = 1;
    scanf("%lld", &n);
    if(n==1)
        printf("1");
    else{
    while (1) {
        if (n % 2 == 1){
            flag = 0;
            break;
        }
        if (n == 2)
            break;
        n /= 2;
    }
    printf("%lld", flag);
    }
    return 0;
}