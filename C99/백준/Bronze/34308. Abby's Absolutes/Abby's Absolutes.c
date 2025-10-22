#include <stdio.h>

int main() {

    int k, n, q,a[100];

    scanf("%d %d",&k,&n);

    for(int i=0;i<n;i++){

        scanf("%d",&q);

        if(k-q>=k/2)

            a[i]=1;

        else

            a[i]=k;

    }

    for(int i=0;i<n;i++){

        printf("%d ",a[i]);

    }

    return 0;

}