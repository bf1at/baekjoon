#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	long long t, n, c;
	scanf("%lld", &t);
	while (t--) {
		scanf("%lld %lld", &n, &c);
		if (n % c == 0)
			printf("%lld\n", n / c);
		else
			printf("%lld\n", n / c + 1);
	}
	return 0;
} 