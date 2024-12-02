#include <stdio.h>

int main() {
    long long a,b;
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",a+b);
    }
    return 0;
}