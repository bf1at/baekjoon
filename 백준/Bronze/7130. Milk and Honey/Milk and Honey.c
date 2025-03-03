#include <stdio.h>

int main() {
    int ch, bh, n, c, b, sum=0;
    scanf("%d %d %d",&ch,&bh,&n);
    while(n--){
        scanf("%d %d",&c,&b);
        if(c*ch>b*bh)
            sum+=c*ch;
        else
            sum+=b*bh;
    }
    printf("%d",sum);
    return 0;
}