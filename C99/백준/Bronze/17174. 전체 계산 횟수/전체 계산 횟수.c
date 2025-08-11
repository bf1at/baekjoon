#include <stdio.h>

int main() {

    int n,m, sum=0;

    scanf("%d %d",&n,&m);

    while(n!=0){

        sum+=n;

        n/=m;

    }

    printf("%d",sum);

    return 0;

}