#include <stdio.h>

int main() {

    int n[9];

    for(int i=1;i<=8;i++){

        scanf("%d",&n[i]);

    }

    if(n[1]==1){

        for(int i=2;i<=8;i++){

            if(n[i]!=i){

                printf("mixed");

                return 0;

            }

        }

        printf("ascending");

        return 0;

    }

    else if(n[1]==8){

        for(int i=2;i<=8;i++){

            if(n[i]!=9-i){

                printf("mixed");

                return 0;

            }

        }

        printf("descending");

        return 0;

    }

    else

        printf("mixed");

    return 0;

}