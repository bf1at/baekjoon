#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int t;
	char c;
	double r, h, v;
	double pi = 3.14159;
	double max = 0.0;
	scanf("%d", &t);
	while (t--) {
		scanf(" %c", &c);
		if (c == 'C') {
			scanf("%lf %lf", &r, &h);
			v = 1.0 / 3.0 * pi * r * r * h;
		}
		else if (c == 'L') {
			scanf("%lf %lf", &r, &h);
			v = pi * r * r * h;

		}
		else if (c == 'S') {
			scanf("%lf", &r);
			v = 4.0 / 3.0 * pi * r * r * r;
		}
		if (v > max)
			max = v;
	}
	printf("%.3f", max);
	return 0;
}