#include <stdio.h>

int main() {

    int t, n,i;

    scanf("%d",&t);

    while(t--){

        scanf("%d",&n);

        for(i=1;;i++){

            if(i+i*i>n){

                i--;

                break;

            }

            else if(i+i*i==n)

                break;

        }

        printf("%d\n",i);

    }

    return 0;

}