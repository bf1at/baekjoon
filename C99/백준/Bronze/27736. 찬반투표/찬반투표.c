#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int n, a, agree=0, oppose=0, abstain=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a == 1)
            agree++;
        else if (a == -1)
            oppose++;
        else
            abstain++;
    }
    if (n % 2 == 1)
        n++;
    if (abstain >= n/2)
        printf("INVALID");
    else {
        if (agree > oppose)
            printf("APPROVED");
        else
            printf("REJECTED");
    }

    return 0;
}