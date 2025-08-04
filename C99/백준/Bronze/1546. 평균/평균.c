#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    double n, score[1000], max = 0, sum = 0;
    scanf("%lf", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &score[i]);
        if (score[i] > max)
            max = score[i];
    }
    for (int i = 0; i < n; i++) {
        sum += score[i] / max * 100;
    }
    printf("%lf", sum / n);
    return 0;
}