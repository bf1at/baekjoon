#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = n-1; j > i; j--)
			printf(" ");
		printf("*");
		for (int k = 2 * i - 1; k > 0; k--)
			printf(" ");
		if (i != 0)
			printf("*");
		printf("\n");
	}
	return 0;
}