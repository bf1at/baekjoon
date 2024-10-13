#include <stdio.h>
#include <ctype.h>

int main() {
    char a[1000001];  // 1,000,000개의 문자 저장 가능
    int i = 0, ch;

    // getc(stdin) 또는 getchar를 사용하여 빠르게 입력 받기
    while ((ch = getchar()) != '\n' && ch != EOF) {
        a[i++] = toupper(ch);  // 입력받은 문자를 바로 대문자로 변환
    }
    a[i] = '\0';  // 문자열 끝에 null 문자 추가

    // putchar를 사용하여 빠르게 출력
    for (int j = 0; j < i; j++) {
        putchar(a[j]);
    }

    return 0;
}
