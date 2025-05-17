#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int t, a, b, count;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		count = 0;
		scanf("%d %d", &a, &b);
		for (int j = 1; j * j * j <= b; j++) {
			if (j * j * j >= a)
				count++;
		}
		printf("Case #%d: %d\n", i, count);
	}
	return 0;
}