#include <stdio.h>

int main() {
    long long n,f=1;
    scanf("%lld",&n);
    for(int i=2;i<=n;i++){
        f*=i;
    }
    printf("%lld",f);
    return 0;
}