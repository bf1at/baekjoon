#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = 0;
	sum += a * 1000;
	sum += b * 10000;
	printf("%d", sum);

	return 0;
}