#include <stdio.h>

int main() {

    int c, v, t;

    scanf("%d",&t);

    while(t--){

        scanf("%d %d",&c,&v);

        printf("You get %d piece(s) and your dad gets %d piece(s).\n",c/v,c%v);

    }

    return 0;

}