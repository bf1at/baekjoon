#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        while (a > b && c != 0) {
            b++;
            c--;
        }
    }
    else if (a < b) {
        while (b > a && c != 0) {
            a++;
            c--;
        }
    }
    a += c / 2;
    b += c / 2;
    if (a > b)
        a = b;
    else
        b = a;

    printf("%d", a + b);

    return 0;
}