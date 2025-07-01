#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int answer[10] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};

    for (int i = 0; i < n; i++) {
        int correct = 1;
        for (int j = 0; j < 10; j++) {
            int input;
            scanf("%d", &input);
            if (input != answer[j]) {
                correct = 0;  // 하나라도 다르면 탈락
            }
        }
        if (correct) {
            printf("%d\n", i + 1);  // 1-based index
        }
    }

    return 0;
}
