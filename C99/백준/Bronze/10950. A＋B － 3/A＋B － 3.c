#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
    long long a,b, n;
    scanf("%lld", &n);
    for(int i=0;i<n; i++){
         scanf("%lld %lld", &a, &b);
         printf("%lld\n", a+b);
    }
return 0;
}