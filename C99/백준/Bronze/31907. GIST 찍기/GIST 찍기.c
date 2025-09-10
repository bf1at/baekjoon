#include <stdio.h>

int main() {

    int n;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        for(int i=0;i<n;i++)

            printf("G");

        for(int i=0;i<n;i++)

            printf("...");

        printf("\n");

    }

    for(int i=0;i<n;i++){

        for(int i=0;i<n;i++)

            printf(".");

        for(int i=0;i<n;i++)

            printf("I");

        for(int i=0;i<n;i++)

            printf(".");

        for(int i=0;i<n;i++)

            printf("T");

        printf("\n");

    }

    for(int i=0;i<n;i++){

        for(int i=0;i<n;i++)

            printf("..");

        for(int i=0;i<n;i++)

            printf("S");

        for(int i=0;i<n;i++)

            printf(".");

        printf("\n");

    }

    return 0;

}