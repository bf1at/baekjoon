#include <stdio.h>

int main() {
    long long a,b;
    scanf("%lld %lld", &a,&b);
    if(a%b==0)
        printf("Yes");
    else
        printf("No");
    return 0;
}