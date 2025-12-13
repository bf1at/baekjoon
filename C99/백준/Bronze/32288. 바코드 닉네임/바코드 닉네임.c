#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char s[501];
    int n;
    scanf("%d", &n);
    scanf("%s", s);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'l')
            printf("L");
        else
            printf("i");
    }

    return 0;

}