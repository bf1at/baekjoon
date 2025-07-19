#include <stdio.h>

int main() {
    int t,n,a,b,c,sum,max;
    scanf("%d",&t);
    while(t--){
        sum=0;
        scanf("%d",&n);
        while(n--){
            scanf("%d %d %d",&a,&b,&c);
            max=a;
            if(b>max)
                max=b;
            if(c>max)
                max=c;
            if(max>0)
                sum+=max;
        }
        printf("%d\n",sum);
    }
    return 0;
}