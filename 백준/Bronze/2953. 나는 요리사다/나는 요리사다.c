#include <stdio.h>

int main() {
    int score[4];
    int winner, max=0, sum=0;
    for (int i=1;i<=5;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&score[j]);
            sum+=score[j];
        }
        if(sum>=max){
            winner=i;
            max=sum;
        }
        sum=0;
    }
    printf("%d %d", winner, max);
    return 0;
}