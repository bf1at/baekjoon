#include <stdio.h>

int main() {

    int n;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        for(int j=0;j<n*5;j++)

            printf("@");

        printf("\n");

    }

    for(int i=0;i<3*n;i++){

        for(int j=0;j<n;j++)

            printf("@");

        for(int j=0;j<3*n;j++)

            printf(" ");

        for(int j=0;j<n;j++)

            printf("@");

        printf("\n");

    }

    for(int i=0;i<n;i++){

        for(int j=0;j<n*5;j++)

            printf("@");

        printf("\n");

    }

    return 0;

}