#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	long long n, score=0;
	scanf("%lld", &n);
	while (n!=1) {
		if (n % 2 == 1) {
			n *= 3;
			n += 1;
		}
		else
			n /= 2;
		score++;
	}
	printf("%lld", score);
	return 0;
}