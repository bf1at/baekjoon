#include <stdio.h>

#include <stdlib.h>

void swap(char *a, char *b){

    char temp = *a;

    *a = *b;

    *b = temp;

}

int main() {

    char a[4],b[4];

    int n;

    scanf("%s %s",a,b);

    swap(&a[0],&a[2]);

    swap(&b[0],&b[2]);

    n=atoi(a)>atoi(b)?atoi(a):atoi(b);

    printf("%d",n);

    return 0;

}