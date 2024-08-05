#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int a, n = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a);
		n += a;
	}
	printf("%d", n);
	return 0;
}