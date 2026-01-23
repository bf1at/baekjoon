#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int t, n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		int sum = 0;
		while (1) {
			if (n % 2 == 1) {
				sum++;
				n /= 2;
				n++;
			}
			else
				n /= 2;
			if (n == 1)
				break;
		}
		printf("%d\n", sum);
	}

	return 0;
}