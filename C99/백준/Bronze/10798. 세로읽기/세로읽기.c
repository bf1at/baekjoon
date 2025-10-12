#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char s[5][16] = { 0 };
	for (int i = 0; i < 5; i++) {
		scanf("%s", s[i]);
		getchar();
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (s[j][i] != NULL)
				printf("%c", s[j][i]);
		}
	}

	return 0;
}