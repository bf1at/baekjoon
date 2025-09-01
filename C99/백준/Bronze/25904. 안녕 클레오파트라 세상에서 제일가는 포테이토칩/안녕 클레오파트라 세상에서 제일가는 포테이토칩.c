#include <stdio.h>

int main() {

    int n, x, t[101],end=0;

    scanf("%d %d",&n,&x);

    for(int i=1;i<=n;i++){

        scanf("%d",&t[i]);

    }

    while(1){

    for(int i=1;i<=n;i++){

        if(t[i]<x){

            printf("%d",i);

            end=1;

            break;

        }

        x++;

    }

        if(end==1)

        break;

    }

    return 0;

}