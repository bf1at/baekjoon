#include <stdio.h>

int main() {
    int t, n, max=-1000000,min=1000000;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n>max)
            max=n;
        if(n<min)
            min=n;
    }
    printf("%d %d",min,max);
    return 0;
}