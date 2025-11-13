#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int p, m, c, x, min;
	scanf("%d %d %d %d", &p, &m, &c, &x);
	min = abs((p + m) * (m + c) - x);
	for (int i = 1; i <= p; i++) {
		for (int j = 1; j <= m; j++) {
			for (int k = 1; k <= c; k++) {
				if (abs((i + j) * (j + k) - x) < min)
					min = abs((i + j) * (j + k) - x);
			}
		}
	}
	printf("%d", min);
	return 0;
}