#include <stdio.h>

int main() {

    int t,d,n,s,p;

    scanf("%d",&t);

    while(t--){

        scanf("%d %d %d %d",&d,&n,&s,&p);

        int j=n*s, b=d+n*p;

        if(j<b)

            printf("do not parallelize\n");

        else if(j==b)

            printf("does not matter\n");

        else

            printf("parallelize\n");

    }

    return 0;

}