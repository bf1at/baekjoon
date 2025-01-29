#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0, b = 0, asum = 0, bsum = 0, t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &a, &b);
		if (a > b)
			asum += a + b;
		else if (a == b) {
			asum += a;
			bsum += b;
		}
		else
			bsum += a + b;
	}
	printf("%d %d\n", asum, bsum);
	return 0;
}