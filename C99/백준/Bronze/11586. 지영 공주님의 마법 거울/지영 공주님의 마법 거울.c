#include <stdio.h>

int main() {

    int n,k;

    char m[101][101];

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%s",m[i]);

    }

    scanf("%d",&k);

    if(k==1){

        for(int i=0;i<n;i++){

            printf("%s\n",m[i]);

        }

    }

    if(k==2){

        for(int i=0;i<n;i++){

            for(int j=n-1;j>=0;j--)

                printf("%c",m[i][j]);

            printf("\n");

        }

    }

    if(k==3){

        for(int i=0;i<n;i++){

            printf("%s\n",m[n-i-1]);

        }

    }

    return 0;

}