#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int p, n, sum=0, a, b;
	scanf("%d %d", &p, &n);
	while (n--) {
		scanf("%d %d", &a, &b);
		sum += a * b;
	}
	if (sum == p)
		printf("Yes");
	else
		printf("No");

	return 0;
} 