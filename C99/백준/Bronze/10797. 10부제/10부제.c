#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int n, a,sum=0;
	scanf("%d", &n);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a);
		if (a == n)
			sum++;
	}
	printf("%d", sum);
	return 0;
} 