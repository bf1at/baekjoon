#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int a, b, c[5];
	scanf("%d %d", &a, &b);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &c[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", c[i] - a * b);
	}
	return 0;
}