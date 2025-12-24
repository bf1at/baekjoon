#include <stdio.h>

int main() {

    int n, x;

    char c;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        int sum=0;

        scanf("%d",&x);

        scanf(" %c",&c);

        if(c=='!')

            sum+=10;

        else

            sum+=c-'0';

        for(int j=0;j<x;j++){

            scanf(" + %c",&c);

            if(c=='!')

                sum+=10;

            else

                sum+=c-'0';

        }

        if(sum<10)

            printf("%d\n",sum);

        else

            printf("!\n");

    }

    return 0;

}