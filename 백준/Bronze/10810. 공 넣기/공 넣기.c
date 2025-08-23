#include <stdio.h>

int main() {
    int basket[101] = {0}, n, m, a, b, c;
    scanf("%d %d",&n,&m);
    for(int i=0; i<m; i++){
        scanf("%d %d %d",&a,&b,&c);
        for(int j=a; j<=b; j++)
            basket[j] = c;
    }
    for(int i=1; i<=n; i++)
        printf("%d ",basket[i]);
    return 0;
}