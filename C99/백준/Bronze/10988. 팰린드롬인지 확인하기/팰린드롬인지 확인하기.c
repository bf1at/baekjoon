#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	char s[101];
	int flag = 1;
	scanf("%s", s);
	for (int i = 0; i < strlen(s) / 2; i++) {
		if (s[i] != s[strlen(s) - i-1]) {
			flag = 0;
			break;
		}
	}
	printf("%d", flag);
	return 0;
}