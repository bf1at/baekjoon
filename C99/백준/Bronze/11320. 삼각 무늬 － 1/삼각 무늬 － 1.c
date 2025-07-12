#include <stdio.h>

int tri(int n){

    if(n==0)

        return 0;

    return n*2-1+tri(n-1);

}

int main() {

    int t,a,b,n;

    scanf("%d",&t);

    while(t--){

        scanf("%d %d",&a,&b);

        n=a/b;

        printf("%d\n",tri(n));

    }

    return 0;

}