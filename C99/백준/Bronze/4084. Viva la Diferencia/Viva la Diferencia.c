#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	long long a, b, c, d, n = 0;
	long long d1, d2, d3, d4;
	while (1) {
		scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
		if (a == 0 && b == 0 && c == 0 && d == 0)
			break;
		while (a != b || b != c || c != d) {
			d1 = abs(a - b);
			d2 = abs(b - c);
			d3 = abs(c - d);
			d4 = abs(d - a);
			a = d1;
			b = d2;
			c = d3;
			d = d4;
			n++;
		}
		printf("%lld\n", n);
		n = 0;
	}
	return 0;
}