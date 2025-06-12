#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int n;
	int a;
	int max;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		max = 0;
		for (int j = 0; j < 5; j++) {
			scanf("%d", &a);
			if (a > max)
				max = a;
		}
		printf("Case #%d: %d\n", i, max);
	}
	return 0;
} 