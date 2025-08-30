#include <stdio.h>

int main() {

    int n, x[1001][1001],a,b,flag=0;

    scanf("%d %d %d",&n,&a,&b);

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){

            scanf("%d",&x[i][j]);

        }

    }

    for(int i=1;i<=n;i++){

        if(x[i][b]>x[a][b])

            flag=1;

    }

    for(int j=1;j<=n;j++){

        if(x[a][j]>x[a][b])

            flag=1;

    }

    if(flag==1)

        printf("ANGRY");

    else

        printf("HAPPY");

    return 0;

}