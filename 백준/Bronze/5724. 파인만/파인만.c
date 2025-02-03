#include <stdio.h>

int fineman(int n){
    if(n>0)
        return n*n+fineman(n-1);
    else
        return 0;
}

int main() {
    int n;
    while(1){
        scanf("%d",&n);
        if(n==0)
            break;
        printf("%d\n",fineman(n));
    }
    return 0;
}