#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int n, k, a = 0, y = 0;
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			y = i;
			a++;
			if (a == k) {
				printf("%d", y);
				break;
			}
		}
	}
	if (a != k)
		printf("%d", 0);
	return 0;
}