#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int n, sum = 0, s, c, a, r;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d", &s, &c, &a, &r);
		if (s >= 1000) {
			sum++;
			continue;
		}
		if (c >= 1600) {
			sum++;
			continue;
		}
		if (a >= 1500) {
			sum++;
			continue;
		}
		if (r <= 30 && r >= 1) {
			sum++;
			continue;
		}
	}
	printf("%d", sum);

	return 0;
}