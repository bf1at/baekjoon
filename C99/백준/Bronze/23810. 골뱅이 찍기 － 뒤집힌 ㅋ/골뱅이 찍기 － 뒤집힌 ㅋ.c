#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n * 5; j++)
            printf("@");
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("@");
        printf("\n");
    }
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n * 5; j++)

            printf("@");

        printf("\n");

    }

    for (int i = 0; i < n*2; i++) {

        for (int j = 0; j < n; j++)

            printf("@");

        printf("\n");

    }
    return 0;

}