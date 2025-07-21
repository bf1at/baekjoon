#include <stdio.h>

int main() {

    int t,y,k,a,b;

    scanf("%d",&t);

    while(t--){

        y=0;

        k=0;

        for(int i=0;i<9;i++){

            scanf("%d %d",&a,&b);

            y+=a;

            k+=b;

        }

        if(y>k)

            printf("Yonsei\n");

        else if(y==k)

            printf("Draw\n");

        else

            printf("Korea\n");

    }

    return 0;

}