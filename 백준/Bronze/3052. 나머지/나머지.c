#include <stdio.h>

int main() {
    int n, r[42]={0}, sum=0;
    for(int i=0;i<10;i++){
        scanf("%d",&n);
        r[n%42]++;
    }
    for(int i=0;i<42;i++){
        if(r[i]!=0)
            sum++;
    }
    printf("%d",sum);
    return 0;
}