#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int n, t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		if (n % 2 == 0)
			printf("%d is even\n", n);
		else
			printf("%d is odd\n", n);
	}
	return 0;
} 