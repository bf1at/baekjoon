#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int n, sum=0;
	char s[101];
	scanf("%d", &n);
	getchar();
	scanf("%s", s);
	for (int i = 0; i < n; i++) {
		sum += s[i] - '0';
	}
	printf("%d", sum);

	return 0;
} 