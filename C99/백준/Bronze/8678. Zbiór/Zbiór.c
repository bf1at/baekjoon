#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	long long a, b, n;
	scanf("%lld", &n);
	while (n--) {
		scanf("%lld %lld", &a, &b);
		if (b % a == 0 && b >= a)
			printf("TAK\n");
		else
			printf("NIE\n");
	}

	return 0;
}