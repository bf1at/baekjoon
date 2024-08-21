#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	long long a, b, g, s, d, a1, b1, a2, b2;
	scanf("%lld %lld", &a, &b);
	if (a % 4 == 0) {
		a1 = 4;
		a2 = a / 4 - 1;
	}
	else {
		a1 = a % 4;
		a2 = a / 4;
	}
	if (b % 4 == 0) {
		b1 = 4;
		b2 = b / 4 - 1;
	}
	else {
		b1 = b % 4;
		b2 = b / 4;
	}
	if (a1 > b1)
		s = a1 - b1;
	else
		s = b1 - a1;
	if (a2 > b2)
		g = a2 - b2;
	else
		g = b2 - a2;
	d = g + s;
	printf("%lld", d);
	return 0;
}