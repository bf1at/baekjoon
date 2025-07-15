#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int a, b, c, d, t1, t2;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	t1 = c + b;
	t2 = a + d;
	if (t1 < t2)
		printf("%d", t1);
	else
		printf("%d", t2);
	return 0;
} 