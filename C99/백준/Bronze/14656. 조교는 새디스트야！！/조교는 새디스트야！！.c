#include <stdio.h>

int main() {

    int n,a,sum=0;

    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        scanf("%d",&a);

        if(i!=a)

        sum++;

    }

    printf("%d",sum);

    return 0;

}