#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int t, n, d;
	double v, f, c;
	scanf("%d", &t);
	while (t--) {
		int count = 0;
		scanf("%d %d", &n, &d);
		while (n--) {
			scanf("%lf %lf %lf", &v, &f, &c);
			if (v * f / c >= d)
				count++;
		}
		printf("%d\n", count);
	}
	return 0;
}