#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int t, count = 0;
	double a, b, c, d;
	scanf("%d", &t);
	while (t--) {
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
		if (((a > 56 || b > 45 || c > 25)&& (a + b + c > 125))||d>7){
			printf("0\n");
		}
		else {
			printf("1\n");
			count++;
		}
	}
	printf("%d", count);
	return 0;
}