#include <stdio.h>

int main() {

    long long d,a,b, w;

    scanf("%lld %lld %lld",&d,&a,&b);

    while(1){

        d-=a;

        if(d<0){

            w=1;

            break;

        }

        d-=b;

        if(d<0){

            w=0;

            break;

        }

    }

    printf("%lld",w);

    return 0;

}