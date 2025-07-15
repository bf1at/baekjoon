#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	long long n, m;
	scanf("%lld %lld", &n, &m);
	if (n % 2 == 0)
		printf("%lld", n / 2 * m);
	else if (m % 2 == 0)
		printf("%lld", m / 2 * n);
	else
		printf("%lld", n * m / 2);
	return 0;
} 