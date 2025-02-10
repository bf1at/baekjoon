#include <stdio.h>

int main() {
    int n,count=0;
    scanf("%d",&n);
    for(int a=2;a*a-(a-1)*(a-1)<=n;a++){
        for(int b=1;b<a;b++){
            if(a*a-b*b==n){
                count++;
                break;
            }
        }
    }
    printf("%d",count);
    return 0;
}