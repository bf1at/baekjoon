#include <stdio.h>

int main() {
    char buffer[1000];  // 한 줄을 저장할 배열
    int line_count = 0; // 줄 수를 셀 변수

    // 파일에서 한 줄씩 읽어오기
    while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        line_count++;  // 한 줄 읽을 때마다 줄 수 증가
    }

    // 줄 수 출력
    printf("%d\n", line_count);

    return 0;
}
