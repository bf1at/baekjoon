#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main() {
	float a, b, c, d, max=0.0;
	int n=0;
	scanf("%f %f %f %f", &a, &b, &c, &d);
	if ((a / c + b / d) > max) {
		max = (a / c + b / d);
		n = 0;
	}
	if ((c / d + a / b) > max) {
		max = (c / d + a / b);
		n = 1;
	}
	if ((d / b + c / a) > max) {
		max = (d / b + c / a);
		n = 2;
	}
	if ((b / a + d / c) > max) {
		max = (b / a + d / c);
		n = 3;
	}
	printf("%d", n);
	return 0;
}