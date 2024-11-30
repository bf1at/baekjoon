#include <stdio.h>

int main() {
    int a, b, x, w,n;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d",&a,&b,&x);
        w=a*(x-1)+b;
        printf("%d\n",w);
    }
    return 0;
}