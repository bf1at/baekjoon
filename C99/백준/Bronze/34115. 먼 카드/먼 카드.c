#include <stdio.h>

int main() {

    int n, x[2001]={0}, k,max=0;

    scanf("%d",&n);

    for(int i=1;i<=n*2;i++){

        scanf("%d",&k);

        if(x[k]==0)

            x[k]=i;

        else{

            if(i-x[k]-1>max)

                max=i-x[k]-1;

        }

    }

    printf("%d",max);

    

    return 0;

}