#include <stdio.h>

int main() {

    int n,sum=0;

    while (scanf("%d", &n) != EOF){

        if(n>0)

            sum++;

    }

    printf("%d",sum);

    return 0;

}