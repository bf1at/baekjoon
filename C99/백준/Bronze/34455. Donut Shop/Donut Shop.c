#include <stdio.h>

int main() {

    int a, b, d;

    char c;

    scanf("%d %d",&a,&b);

    for(int i=0;i<b;i++){

        scanf(" %c %d",&c,&d);

        if(c=='+')

            a+=d;

        else if(c=='-')

            a-=d;

    }

    printf("%d",a);

    return 0;

}