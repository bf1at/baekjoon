#include <stdio.h>

#include <stdlib.h>

int main() {

    int seat[101][101];

    int n, m, dis, a=-1, b=-1;

    scanf("%d %d",&n,&m);

    int min = 1000000000;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=m;j++){

            scanf("%d",&seat[i][j]);

            if(seat[i][j]==0){

                dis =  i+abs((m+1)/2-j);

                if(dis<min){

                    min = dis;

                    a = i;

                    b = j;

                }

            }

        }

    }

    if(a<0)

        printf("-1");

    else

        printf("%d %d",a,b);

    return 0;

}