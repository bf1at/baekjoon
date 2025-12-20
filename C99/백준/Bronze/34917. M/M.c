#include <stdio.h>

int main() {

    int t,n;

    scanf("%d",&t);

    for(int k=0;k<t;k++){

        scanf("%d",&n);

        for(int i=0;i<n;i++){

            printf("#");

            if(i==0||i>n/2){

                for(int j=0;j<n-2;j++)

                    printf(".");

            }

            else{

                for(int j=1;j<=n-2;j++){

                    if(j==i||j==n-i-1)

                        printf("#");

                    else

                        printf(".");

                }

            }

            printf("#\n");

        }

    }

    return 0;

}