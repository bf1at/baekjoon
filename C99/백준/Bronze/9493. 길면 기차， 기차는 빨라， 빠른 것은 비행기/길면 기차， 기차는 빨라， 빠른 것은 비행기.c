#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	double m, a, b;
	int hour, min, sec;
	while (1) {
		scanf("%lf %lf %lf", &m, &a, &b);
		if (a == 0 && b == 0 && m == 0)
			break;
		sec = (int)((m / a - m / b) * 3600 + 0.5);
		min = sec / 60;
		sec %= 60;
		hour = min / 60;
		min %= 60;
		printf("%d:%02d:%02d\n", hour, min, sec);
	}
	return 0;
}