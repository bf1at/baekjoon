#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    if((x-2)%7==0)
        printf("1");
    else
        printf("0");
    return 0;
}