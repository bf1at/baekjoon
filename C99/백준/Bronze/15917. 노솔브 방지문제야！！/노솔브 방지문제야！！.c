#include <stdio.h>

int main() {

    long long q, a, flag;

    scanf("%lld",&q);

    for(long long i=0;i<q;i++){

        scanf("%lld",&a);

        while(1){

            if(a>=3&&a%2==1){

                flag=0;

                break;

            }

            else if(a<=2){

                flag=1;

                break;

            }

            a/=2;

        }

        printf("%lld\n",flag);

    }

    return 0;

}