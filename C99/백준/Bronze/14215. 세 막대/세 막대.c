#include <stdio.h>

void change(int* a, int* b){

    int temp=*a;

    *a=*b;

    *b=temp;

}

int main() {

    int a,b,c,d;

    scanf("%d %d %d",&a,&b,&c);

    if(a>b)

        change(&a,&b);

    if(b>c)

        change(&b,&c);

    if(a>b)

        change(&a,&b);

    if(c>=a+b)

        d=(a+b)*2-1;

    else

        d=a+b+c;

    printf("%d",d);

    return 0;

}