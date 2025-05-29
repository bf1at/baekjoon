#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int n, h, b, k, p = 0;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d %d", &h, &b, &k);
		if (h < b)
			p += (b - h) * k;
	}
	printf("%d", p);

	return 0;
} 