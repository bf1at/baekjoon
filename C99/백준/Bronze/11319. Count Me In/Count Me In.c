#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    char s[101];
    int n;
    scanf("%d", &n);
    getchar();
    while (n--) {
        fgets(s, 101, stdin);
        int len = strlen(s), a = 0, b = 0;
        for (int i = 0; i < len - 1; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                b++;
            else if (s[i] != ' ')
                a++;
        }
        printf("%d %d\n", a, b);
    }
    return 0;
}