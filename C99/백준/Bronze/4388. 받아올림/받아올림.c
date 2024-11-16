#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	long long a, b, n=0, bada=0;
	while (1) {
		scanf("%lld %lld", &a, &b);
		if (a == 0 && b == 0)
			break;
		while (1) {
			if (a % 10 + b % 10 + bada > 9) {
				n++;
				bada = 1;
			}
			else
				bada = 0;
			a /= 10;
			b /= 10;
			if (a == 0 && b == 0)
				break;
		}
		printf("%lld\n", n);
		n = 0;
		bada = 0;
	}
	return 0;
}