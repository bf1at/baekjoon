#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int c[6] = { 1,1,2,2,2,8 };
	int y[6] = { 0 };
	scanf("%d %d %d %d %d %d", &y[0], &y[1], &y[2], &y[3], &y[4], &y[5]);
	for (int i = 0; i < 6; i++) {
		printf("%d ", c[i] - y[i]);
	}
	return 0;
}