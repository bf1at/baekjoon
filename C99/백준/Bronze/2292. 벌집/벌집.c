#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
		long long n, i=1, k;

		scanf("%lld", &n);

		for (k = 1; k < n; i++) {
			k += 6 * i;
		}
		printf("%lld\n", i);

	return 0;
}