#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int t, n, a;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int max, min;
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%d", &a);
			if (j == 0) {
				max = a;
				min = a;
			}
			else {
				if (a > max)
					max = a;
				else if (a < min)
					min = a;
			}
		}
		printf("%d %d\n", min, max);
	}

	return 0;
}