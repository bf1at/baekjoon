#include <stdio.h>

int main() {

    int n,m, sum=0,a;

    scanf("%d %d",&n,&m);

    int max=0;

    for(int i=0;i<n;i++){

        scanf("%d",&a);

        if(a>max)

            max=a;

    }

    sum+=max;

    max=0;

    for(int i=0;i<m;i++){

        scanf("%d",&a);

        if(a>max)

            max=a;

    }

    sum+=max;

    printf("%d",sum);

    return 0;

}