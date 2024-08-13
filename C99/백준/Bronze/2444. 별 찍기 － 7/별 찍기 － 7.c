#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n-1; i++) {
		for (int j = n - i-1; j > 0; j--)
			printf(" ");
		for (int k = 0; k < 2 * i +1; k++)
			printf("*");
		printf("\n");
	}
	for (int l = 0; l < n; l++) {
		for (int m = 0; m < l; m++)
			printf(" ");
		for (int o = 2 * (n - l) - 1; o > 0; o--)
			printf("*");
		printf("\n");
	}
	return 0;
}