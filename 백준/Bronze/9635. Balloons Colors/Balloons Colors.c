#include <stdio.h>

int main() {

    int t,n,a,b,start,end,color;

    scanf("%d",&t);

    while(t--){

        scanf("%d %d %d",&n,&a,&b);

        for(int i=0;i<n;i++){

            scanf("%d",&color);

            if(i==0)

                start=color;

            if(i==n-1)

                end=color;

        }

        if(start==a&&end==b)

            printf("BOTH\n");

        else if(start==a)

            printf("EASY\n");

        else if(end==b)

            printf("HARD\n");

        else

            printf("OKAY\n");

    }

    return 0;

}