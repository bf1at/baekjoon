#include <stdio.h>

int main() {

    int n, h[4]={0}, a;

    scanf("%d",&n);

    for(int i=0;i<n*3;i++){

        scanf("%d",&a);

        h[a]++;

    }

    for(int i=1;i<4;i++){

        if(h[i]==n-1)

            printf("%d\n",i);

    }

    for(int i=1;i<4;i++){

        if(h[i]==n+1)

            printf("%d",i);

    }

    return 0;

}