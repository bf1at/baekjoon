#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n>=620&&n<=780)
        printf("Red");
    else if(n>=590&&n<620)
        printf("Orange");
    else if(n>=570&&n<590)
        printf("Yellow");
    else if(n>=495&&n<570)
        printf("Green");
    else if(n>=450&&n<495)
        printf("Blue");
    else if(n>=425&&n<450)
        printf("Indigo");
    else
        printf("Violet");
    return 0;
}