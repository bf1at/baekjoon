#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int n, a, sum = 0, max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a > 0)
            sum++;
        else {
            if (max < sum)
                max = sum;
            sum = 0;
        }
    }
    if (max < sum)
        max = sum;
    printf("%d", max);
    return 0;
}