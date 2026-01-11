#include <stdio.h>

int main() {

    long long n, f, i;

    scanf("%lld %lld",&n,&f);

    n-=n%100;

    for(i=0;i<100;i++){

        if((n+i)%f==0){

            break;

        }

    }

    printf("%02lld",i);

    return 0;

}