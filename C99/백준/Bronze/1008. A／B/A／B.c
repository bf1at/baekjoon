#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	double a = 0, b = 0;
	scanf("%d %d", &a, &b);
	printf("%.10lf\n", a / b);
	return 0;
}