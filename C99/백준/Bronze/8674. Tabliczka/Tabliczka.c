#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if (a % 2 == 0 || b % 2 == 0)
		printf("0");
	else {
		if (a < b)
			printf("%lld", a);
		else
			printf("%lld", b);
	}

	return 0;
} 