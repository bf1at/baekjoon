#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    char s[1000001];
    long long a[128] = { 0 };
    char c;
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        a[toupper(s[i])]++;
    }
    long long max = 0;
    int flag = 0;
    for (int i = 'A'; i <='Z'; i++) {
        if (a[i] > max) {
            max = a[i];
            c = i;
            flag = 0;
        }
        else if (a[i] == max)
            flag++;
    }
    if (flag != 0)
        printf("?");
    else
        printf("%c", c);
    return 0;
}