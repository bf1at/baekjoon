#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int n, a, b, c, min = 1000;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &b, &c);
		if (a + b + c >= 512) {
			if (min > a + b + c - 512)
				min = a + b + c - 512;
		}
	}
	if (min == 1000)
		printf("-1");
	else
	printf("%d", min+512);

	return 0;
}