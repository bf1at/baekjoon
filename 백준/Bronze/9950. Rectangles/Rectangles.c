#include <stdio.h>

int main() {

    int a,b,c;

    while(1){

        scanf("%d %d %d",&a,&b,&c);

        if(a==0&&b==0&&c==0)

            break;

        if(a==0)

            a=c/b;

        else if(b==0)

            b=c/a;

        else if(c==0)

            c=a*b;

        printf("%d %d %d\n",a,b,c);

    }

    return 0;

}