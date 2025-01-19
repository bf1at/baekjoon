#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[65];
        int k, code, error = 0;
        scanf("%s", s);

        int len = strlen(s);  // 문자열 길이 계산
        k = len / 8;          // 8비트 블록 개수

        for (int block = 0; block < k; block++) {
            int sum = 0;
            int start = block * 8;  // 현재 블록의 시작 인덱스
            int end = start + 7;    // 7비트 끝 인덱스

            // 7비트에서 '1'의 개수 계산
            for (int i = start; i < end; i++) {
                if (s[i] == '1')
                    sum++;
            }

            // 패리티 비트 계산
            code = (sum % 2 == 0) ? 0 : 1;

            // 패리티 비트와 비교
            if (code + '0' != s[end])  // 8번째 비트 확인
                error++;
        }

        printf("%d\n", error);  // 오류 개수 출력
    }
    return 0;
}
