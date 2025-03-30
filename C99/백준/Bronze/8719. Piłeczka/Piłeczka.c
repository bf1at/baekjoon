#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	long long n, a, b;
	scanf("%lld", &n);
	while (n--) {
		long long sum = 0;
		scanf("%lld %lld", &a, &b);
		while (a < b) {
			sum++;
			a *= 2;
		}
		printf("%lld\n", sum);
	}
	return 0;
}