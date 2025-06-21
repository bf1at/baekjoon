#include <stdio.h>

#include <string.h>

int main() {

    char s[500];

    while (1) {

        fgets(s, 500, stdin);

        // 개행 문자 제거

        s[strcspn(s, "\n")] = '\0';

        if (strcmp(s, "END") == 0)

            break;

        for (int i = strlen(s) - 1; i >= 0; i--)

            printf("%c", s[i]);

        printf("\n");

    }

    return 0;

}

