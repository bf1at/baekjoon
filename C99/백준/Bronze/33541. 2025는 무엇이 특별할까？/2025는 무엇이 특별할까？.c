#include <stdio.h>

#include <stdlib.h>

int main() {

    int y;

    scanf("%d",&y);

    for(int i=y+1;i<=9999;i++){

        if((i/100+i%100)*(i/100+i%100)==i){

            printf("%d",i);

            return 0;

        }

    }

    printf("-1");

    return 0;

}