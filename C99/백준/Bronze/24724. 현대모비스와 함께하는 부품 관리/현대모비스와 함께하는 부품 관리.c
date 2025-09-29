#include <stdio.h>

int main(void) {

    int T, N;

    int A, B;

    int u, v;

    if (scanf("%d", &T) != 1) return 0;

    for (int i = 1; i <= T; i++) {

        scanf("%d", &N);

        scanf("%d %d", &A, &B);

        for (int j = 0; j < N; j++) {

            scanf("%d %d", &u, &v);

        }

        printf("Material Management %d\n", i);

        printf("Classification ---- End!\n");

    }

    return 0;

}

