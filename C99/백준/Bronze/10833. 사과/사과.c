#include <stdio.h>

int main() {

    int n, a, b, r = 0;

    scanf("%d", &n);

    while(n--) {

        scanf("%d %d", &a, &b);

        r += b % a;

    }

    printf("%d", r);

    return 0;

}

