#include <stdio.h>

int main() {

    int n,m,k,result;

    scanf("%d %d %d",&n,&m,&k);

    if(n==1)

        result=1;

    else{

        result=((m-1)+((k-3)%n)+n)%n+1;

        if(result==0)

            result=n;

    }

    printf("%d",result);

    return 0;

}