#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int a = 0, b = 0, c = 0;
	int t;
	scanf("%d", &t);
	if (t % 10 != 0) {
		printf("-1");
		return 0;
	}
	a = t / 300;
	t %= 300;
	b = t / 60;
	t %= 60;
	c = t / 10;
	printf("%d %d %d", a, b, c);

	return 0;
} 