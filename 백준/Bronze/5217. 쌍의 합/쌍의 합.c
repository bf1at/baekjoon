#include <stdio.h>

int main() {
    int k,n,half;
    scanf("%d",&k);
    while(k--){
        scanf("%d",&n);
        printf("Pairs for %d: ",n);
        if(n%2==0)
            half=n/2;
        else
            half=n/2+1;
        int one=0;
        for(int i=1;i<half;i++){
            for(int j=2;j<=n-1;j++){
                if(i+j==n){
                    if(one==0){
                        printf("%d %d",i,j);
                        one++;
                    }
                    else
                        printf(", %d %d",i,j);
                }
            }
        }
        printf("\n");
    }
    return 0;
}