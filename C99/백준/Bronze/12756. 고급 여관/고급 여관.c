#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int a1, h1, a2, h2;
	scanf("%d %d %d %d", &a1, &h1, &a2, &h2);
	while (!(h1 <= 0 || h2 <= 0)) {
		h1 -= a2;
		h2 -= a1;
	}
	if (h1 <= 0 && h2 <= 0)
		printf("DRAW");
	else if (h1 <= 0)
		printf("PLAYER B");
	else
		printf("PLAYER A");
	return 0;
} 