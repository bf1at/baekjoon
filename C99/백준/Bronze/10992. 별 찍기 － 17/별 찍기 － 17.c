#include <stdio.h>

int main() {

    int n;

    scanf("%d",&n);

    if(n==1)

        printf("*");

    for(int i=0;i<(n-1);i++){

        for(int j=i;j<n-1;j++)

            printf(" ");

        printf("*");

        for(int j=0;j<(2*i-1);j++)

            printf(" ");

        if(i!=0)

            printf("*");

        printf("\n");

    }

    if(n!=1){

        for(int i=0;i<(2*n-1);i++)

            printf("*");

    }

    return 0;

}