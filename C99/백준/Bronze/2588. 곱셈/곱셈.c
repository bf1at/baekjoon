#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int a, b, n1, n2, n3, n4;
	scanf("%d %d", &a, &b);
	n1 = b % 10 * a;
	n2 = (b % 100 - b % 10)/10 * a;
	n3 = (b - b % 100) / 100 * a;
	n4 = n3 * 100 + n2 * 10 + n1;
	printf("%d\n%d\n%d\n%d", n1, n2, n3, n4);
	return 0;
}