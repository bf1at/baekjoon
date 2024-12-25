#include <stdio.h>

int main() {
    int n, m, answer;
    int p[100]={0}, a[100];
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&answer);
            if(answer==a[i])
                p[j]++;
            else
                p[a[i]-1]++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",p[i]);
    }
    return 0;
}