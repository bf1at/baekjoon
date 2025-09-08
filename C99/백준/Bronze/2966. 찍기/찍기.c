#include <stdio.h>

int main() {

    char s[101], 

    as[4]="ABC",bs[5]="BABC",gs[7]="CCAABB";

    int n, max=0, a=0,b=0,g=0;

    scanf("%d %s",&n,s);

    for(int i=0;i<n;i++){

        if(s[i]==as[i%3])

            a++;

        if(s[i]==bs[i%4])

            b++;

        if(s[i]==gs[i%6])

            g++;

    }

    if(a>=max)

        max=a;

    if(b>=max)

        max=b;

    if(g>=max)

        max=g;

    printf("%d\n",max);

    if(a==max)

        printf("Adrian\n");

    if(b==max)

        printf("Bruno\n");

    if(g==max)

        printf("Goran\n");

    return 0;

}