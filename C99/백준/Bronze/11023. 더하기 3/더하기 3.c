#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int n[100], i = 0, sum = 0;
	while (scanf("%d", &n[i]) != EOF) {
		sum += n[i++];
	}
	printf("%d", sum);
	return 0;
} 