#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--)
            printf(" ");
        for(int k=i+1; k>0; k--)
            printf("*");
        printf("\n");
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j>0; j--)
            printf(" ");
        for(int k=n-1; k>i; k--)
            printf("*");
        printf("\n");
    }
    return 0;
}