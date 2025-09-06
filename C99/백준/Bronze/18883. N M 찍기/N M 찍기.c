#include <stdio.h>

int main() {

    int n, m, a=1;;

    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            printf("%d",a);

            a++;

            if(j+1<m)

                printf(" ");

        }

        printf("\n");

    }

    return 0;

}