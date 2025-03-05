#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int n, k, a, b, p = 0, max = 0;
	scanf("%d %d", &n, &k);
	while (n--) {
		scanf("%d %d", &a, &b);
		p += a;
		p -= b;
		if (p - k > max)
			max = p - k;
	}
	printf("%d", max);
	return 0;
}