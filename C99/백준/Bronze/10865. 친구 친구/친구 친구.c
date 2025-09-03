#include <stdio.h>

int main() {
    int n, m, a, b, x[100001]={0};
    scanf("%d %d",&n,&m);
    for(int i=0; i<m; i++){
        scanf("%d %d",&a,&b);
        x[a]++;
        x[b]++;
    }
    for(int i=1; i<=n; i++)
        printf("%d\n",x[i]);
    return 0;
}