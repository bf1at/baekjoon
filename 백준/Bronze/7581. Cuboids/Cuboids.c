#include <stdio.h>

int main() {

    int a,b,c,d;

    while(1){

        scanf("%d %d %d %d",&a,&b,&c,&d);

        if(a==0&&b==0&&c==0&&d==0)

            break;

        if(a==0)

            a=d/b/c;

        else if(b==0)

            b=d/a/c;

        else if(c==0)

            c=d/a/b;

        else if(d==0)

            d=a*b*c;

        printf("%d %d %d %d\n",a,b,c,d);

    }

    return 0;

}