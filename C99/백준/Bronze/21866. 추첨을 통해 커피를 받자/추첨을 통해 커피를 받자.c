#include <stdio.h>

int main() {

    int score[9], hacker=0, sum=0;

    int maxScore[9]={100,100,200,200,

300,300,400,400,500};

    for(int i=0;i<9;i++){

        scanf("%d",&score[i]);

        if(score[i]>maxScore[i])

            hacker=1;

        sum+=score[i];

    }

    if(hacker==1)

        printf("hacker");

    else if(sum>=100)

        printf("draw");

    else

        printf("none");

    return 0;

}