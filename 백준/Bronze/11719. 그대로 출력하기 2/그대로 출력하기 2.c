#include <stdio.h>
#include <string.h>

int main() {
    char lines[100][101];
    int i = 0;

    while (i < 100 && fgets(lines[i], 101, stdin) != NULL)
        i++;

    for (int j = 0; j < i; j++) {
        printf("%s", lines[j]);
    }

    return 0;
}
