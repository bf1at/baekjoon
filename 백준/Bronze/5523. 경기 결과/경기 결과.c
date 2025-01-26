#include <stdio.h>

int main() {
    int aw=0,bw=0,a,b,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        if(a>b)
            aw++;
        else if(a<b)
            bw++;
    }
    printf("%d %d",aw,bw);
    return 0;
}