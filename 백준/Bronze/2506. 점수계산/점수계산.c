#include <stdio.h>

int main() {
    int prob[100];
    int n, chain=0, score=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &prob[i]);
        if(prob[i]==1){
            chain++;
            score += chain;
        }
        else
            chain=0;
    }
    printf("%d", score);
    return 0;
}