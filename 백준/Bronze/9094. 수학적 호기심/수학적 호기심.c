#include <stdio.h>

int main() {

    int t,n,m;

    scanf("%d",&t);

    while(t--){

        int sum=0;

        scanf("%d %d",&n,&m);

        for(int a=1;a<n;a++){

            for(int b=a+1;b<n;b++){

                if(((a*a+b*b+m)%(a*b))==0)

                    sum++;

            }

        }

        printf("%d\n",sum);

    }

    return 0;

}