#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int n = 0;
	scanf("%d", &n);
	for (int i1 = 0; i1 < n; i1++) {
		for (int j1 = 0; j1 < i1; j1++)
			printf(" ");
		for (int k1 = (n - i1 - 1) * 2+1; k1 > 0; k1--)
			printf("*");
		printf("\n");
	}
	for (int i2 = n-1; i2 > 0; i2--) {
		for (int j2 = 0; j2 < i2 -1; j2++)
			printf(" ");
		for (int k2 = (n - i2) * 2+1; k2 > 0; k2--)
			printf("*");
		printf("\n");
	}
	return 0;
}