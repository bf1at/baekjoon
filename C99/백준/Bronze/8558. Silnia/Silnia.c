#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int n, factorial;
	scanf("%d", &n);
	factorial = n;
	if (n == 0) {
		printf("1");
		return 0;
	}
	if (n >= 5) {
		printf("0");
		return 0;
	}
	while (--n) {
		factorial = factorial * n % 10;
	}
	printf("%d", factorial);

	return 0;
} 