#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a == 0) {
		printf("%d", c * c - b);
	}
	else if (b == 0) {
		printf("%d", c * c - a);
	}
	else if (c == 0) {
		printf("%.0lf", sqrt(a + b));
	}

	return 0;
}