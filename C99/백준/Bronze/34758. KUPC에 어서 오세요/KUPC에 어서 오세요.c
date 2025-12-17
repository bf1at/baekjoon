#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int x, y, a, b, n;
	scanf("%d %d %d", &x, &y, &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		int k = 1;
		if (a == x || b == y)
			k--;
		printf("%d\n", k);
	}

	return 0;
}