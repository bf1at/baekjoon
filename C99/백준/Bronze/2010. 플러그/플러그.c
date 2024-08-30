#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int a, n, s=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		s += a - 1;
	}
	s++;
	printf("%d", s);
	return 0;
}