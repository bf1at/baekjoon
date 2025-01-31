#include <stdio.h>
#include <string.h>

int main() {
    long long n, a;
    char c;
    scanf("%lld",&n);
    while(1){
        scanf(" %c",&c);
        if(c=='=')
            break;
        scanf("%lld",&a);
        if(c=='+')
            n+=a;
        else if(c=='-')
            n-=a;
        else if(c=='*')
            n*=a;
        else if(c=='/')
            n/=a;
    }
    printf("%lld",n);
    return 0;
}