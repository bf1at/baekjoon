#include <stdio.h>

int main() {

    int n,k,p,a,c=0;

    scanf("%d %d %d",&n,&k,&p);

    for(int i=0;i<n;i++){

        int count=0;

        for(int j=0;j<k;j++){

            scanf("%d",&a);

            if(a==0)

                count++;

        }

        if(count<p)

                c++;

    }

    printf("%d",c);

    return 0;

}