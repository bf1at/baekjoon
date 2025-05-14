#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int n, t;
	scanf("%d", &t);
	while (t--) {
		int sum = 0;
		scanf("%d", &n);
		for (int i = 1; i <= n; i += 2)
			sum += i;
		printf("%d\n", sum);
	}
	return 0;
}