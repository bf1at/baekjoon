#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int n, a, b;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", i, b - a + 1);
    }
    return 0;
}