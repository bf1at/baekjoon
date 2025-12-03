#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int n, m, k;
	scanf("%d", &n);
	if (n >= 1000000)
		k = 20;
	else if (n >= 500000)
		k = 15;
	else if (n >= 100000)
		k = 10;
	else
		k = 5;
	m = n / 100 * k;
	printf("%d %d", m, n-m);

	return 0;
}