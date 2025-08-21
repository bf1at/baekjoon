#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    char a[11], b[5], c[5];
    scanf("%s %s %s", a, b, c);
    printf("%d\n", atoi(a) + atoi(b) - atoi(c));
    strcat(a, b);
    printf("%d", atoi(a) - atoi(c));
    return 0;
}