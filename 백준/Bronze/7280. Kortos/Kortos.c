#include <stdio.h>

int main() {

    int n, deck[4][13]={0}, i=51;

    char c;

    while(i--){

        scanf(" %c %d",&c,&n);

        if(c=='S')

            deck[0][n-1]++;

        else if(c=='B')

            deck[1][n-1]++;

        else if(c=='V')

            deck[2][n-1]++;

        else

            deck[3][n-1]++;

    }

    for(i=0; i<4; i++){

        for(int j=0;j<13;j++){

            if(deck[i][j]==0){

                if(i==0)

                    printf("S %d",j+1);

                else if(i==1)

                    printf("B %d",j+1);

                else if(i==2)

                    printf("V %d",j+1);

                else

                    printf("K %d",j+1);

            }

        }

    }

    return 0;

}