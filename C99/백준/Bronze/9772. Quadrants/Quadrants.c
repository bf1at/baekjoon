#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	double x, y;
	while (1) {
		scanf("%lf %lf", &x, &y);
		if (x == 0 && y == 0) {
			printf("AXIS");
			return 0;
		}
		if (x == 0 || y == 0) {
			printf("AXIS\n");
		}
		else if (x > 0) {
			if (y > 0)
				printf("Q1\n");
			else
				printf("Q4\n");
		}
		else
		{
			if (y > 0)
				printf("Q2\n");
			else
				printf("Q3\n");
		}
	}
	return 0;
} 