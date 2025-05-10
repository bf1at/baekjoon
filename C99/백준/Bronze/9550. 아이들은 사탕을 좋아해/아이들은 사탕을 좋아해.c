#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int t, n, k, c;
	scanf("%d", &t);
	while (t--) {
		int p = 0;
		scanf("%d %d", &n, &k);
		while (n--) {
			scanf("%d", &c);
			p += c / k;
		}
		printf("%d\n", p);
	}
	return 0;
}