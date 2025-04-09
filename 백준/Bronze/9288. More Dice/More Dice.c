#include <stdio.h>

int main() {

    int t, n;

    scanf("%d",&t);

    for(int k=1;k<=t;k++){

        scanf("%d",&n);

        printf("Case %d:\n",k);

        for(int i=1;i<=n/2;i++){

            for(int j=1;j<7;j++){

                if(i+j==n)

                    printf("(%d,%d)\n",i,j);

            }

        }

    }

    return 0;

}