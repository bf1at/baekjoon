#include <stdio.h>

int main() {
    int n,i, piece;
    scanf("%d",&n);
    piece=2;
    for(i=0;i<=n/2-1;i++){
        piece+=2*(i+2);
    }
    if(n%2==0)
        piece-=i+1;
    printf("%d",piece);
    return 0;
}