#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, k;
    long long t=0,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        for(int j=1;j<=k;j++){
            for(int l=1;l<=j+1;l++){
                t+=l;
                sum+=t*j;
                t=0;
                }
        }
        printf("%lld\n",sum);
        sum=0;
    }
    return 0;
}