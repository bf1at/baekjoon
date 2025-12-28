#include <stdio.h>

int main() {

    int n,x,k,a,b,c[200001]={0};

    scanf("%d %d %d",&n,&x,&k);

    c[x]=1;

    for(int i=0;i<k;i++){

        scanf("%d %d",&a,&b);

        if(c[a]==1){

            c[a]=0;

            c[b]=1;

        }

        else if(c[b]==1){

            c[a]=1;

            c[b]=0;

        }

    }

    for(int i=1;i<=n;i++){

        if(c[i]==1){

            printf("%d",i);

            break;

        }

    }

    return 0;

}