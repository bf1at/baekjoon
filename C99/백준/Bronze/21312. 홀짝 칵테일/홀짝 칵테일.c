#include <stdio.h>

int main() {
    int a[3];
    for(int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }

    int combos[7];
    combos[0] = a[0];
    combos[1] = a[1];
    combos[2] = a[2];
    combos[3] = a[0] * a[1];
    combos[4] = a[0] * a[2];
    combos[5] = a[1] * a[2];
    combos[6] = a[0] * a[1] * a[2];

    int best = 0;
    int hasOdd = 0;

    // 홀수 존재 여부 확인
    for(int i = 0; i < 7; i++) {
        if(combos[i] % 2 == 1) {
            hasOdd = 1;
            break;
        }
    }

    // 최댓값 계산
    for(int i = 0; i < 7; i++) {
        if(hasOdd) {
            if(combos[i] % 2 == 1 && combos[i] > best)
                best = combos[i];
        } else {
            if(combos[i] % 2 == 0 && combos[i] > best)
                best = combos[i];
        }
    }

    printf("%d\n", best);
    return 0;
}
