#include <stdio.h>

int main() {

    char chess[8][8];

    int sum=0;

    for(int i=0;i<8;i++){

        scanf("%s",chess[i]);

        getchar();

    }

    for(int i=0;i<8;i++){

        for(int j=0;j<8;j++){

            if((i+j)%2==0&&chess[i][j]=='F')

                sum++;

        }

    }

    printf("%d",sum);

    return 0;

}