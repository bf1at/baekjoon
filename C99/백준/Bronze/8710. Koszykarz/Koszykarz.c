#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int k, w, m, n;
	scanf("%d %d %d", &k, &w, &m);
	if (k > w) {
		printf("0");
	}
	else {
		n = (w - k) / m;
		if ((w - k) % m != 0)
			n++;
		printf("%d", n);
	}
	return 0;
} 