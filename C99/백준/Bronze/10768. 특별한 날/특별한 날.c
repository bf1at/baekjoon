#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int m, d;
	scanf("%d %d", &m, &d);
	if (m == 1)
		printf("Before");
	else if (m == 2 && d < 18)
		printf("Before");
	else if (m == 2 && d == 18)
		printf("Special");
	else
		printf("After");
	return 0;
} 