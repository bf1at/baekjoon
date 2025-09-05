#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int n, arr[1000] = { 0 }; char s[1000][21], a[21];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", s[i]);
    }
    for (int i = 0; i < n-1; i++) {
        scanf("%s", a);
        for (int j = 0; j < n; j++) {
            if (strcmp(a,s[j])==0)
                arr[j]++;
        }

    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            printf("%s", s[i]);
    }
    return 0;
}