#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	long long k;
	scanf("%lld", &k);
	for (long long j = 0; j < k; j++) {
		long long b;
		double w;
		double r;
		double sum=0;
		scanf("%lld %lf", &b, &w);
		for (long long i = 0; i < b; i++) {
			scanf("%lf", &r);
			sum += 4.0 / 3 * M_PI * r * r * r / 1000;
		}
		if (sum >= w)
			printf("Data Set %lld:\nYes\n\n", j + 1);
		else
			printf("Data Set %lld:\nNo\n\n", j + 1);
	}
	return 0;
}