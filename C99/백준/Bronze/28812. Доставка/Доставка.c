#include <stdio.h>

int main() {

    long long n,c,p,d,v,min;

    scanf("%lld %lld",&n,&c);

    for(int i=0;i<n;i++){

        scanf("%lld %lld %lld",&p,&d,&v);

        if(i==0)

            min=p+d+v*c;

        else if(min>p+d+v*c)

            min=p+d+v*c;

    }

    printf("%lld",min);

    return 0;

}