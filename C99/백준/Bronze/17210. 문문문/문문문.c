#include <stdio.h>

int main() {

    long long n, d;

    scanf("%lld %lld",&n,&d);

    if(n>=6)

        printf("Love is open door");

    else{

        for(long long i=2;i<=n;i++){

            if(i%2==0)

                printf("%lld\n",(d+1)%2);

            else

                printf("%lld\n",d);

        }

            

    }

    return 0;

}