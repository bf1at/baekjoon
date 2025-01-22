#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	double a = 350.34, b = 230.90, c = 190.55, d = 125.30, e = 180.90;
	int t, a1, b1, c1, d1, e1;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d %d %d %d", &a1, &b1, &c1, &d1, &e1);
		printf("$%.2lf\n", a1 * a + b1 * b + c1 * c + d1 * d + e1 * e);
	}
	return 0;
}