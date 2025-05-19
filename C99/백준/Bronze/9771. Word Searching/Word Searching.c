#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	char s[251];
	char word[21];
	int count = 0;
	scanf("%s", word);
	getchar();
	while (scanf("%s", s) != EOF) {
		if (strstr(s, word) != NULL)
			count++;
	}
	printf("%d", count);
	return 0;
}