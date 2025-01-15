#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int r[9]={0};
        int a,b;
        int k;
        scanf("%d",&k);
        while(k--){
            scanf("%d %d",&a,&b);
            r[b]++;
        }
        int max=0;
        for(int i=1;i<9;i++){
            if(r[i]>max)
                max=r[i];
        }
        printf("%d\n",max);
    }
    return 0;
}