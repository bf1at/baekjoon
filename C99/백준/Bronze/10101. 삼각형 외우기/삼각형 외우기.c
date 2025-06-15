#include <stdio.h>

int main() {

    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if(a==60&&a==b&&a==c)

        printf("Equilateral\n");

    else if(a+b+c==180&&(a==b||b==c||c==a))

        printf("Isosceles\n");

    else if(a+b+c==180)

        printf("Scalene\n");

    else

        printf("Error\n");

    return 0;

}