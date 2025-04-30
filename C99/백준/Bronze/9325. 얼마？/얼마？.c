#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int t, n, s, q, p;
	scanf("%d", &t);
	while (t--) {
		int sum = 0;
		scanf("%d %d", &s, &n);
		sum += s;
		while (n--) {
			scanf("%d %d", &q, &p);
			sum += q * p;
		}
		printf("%d\n", sum);
	}
	
	return 0;
}