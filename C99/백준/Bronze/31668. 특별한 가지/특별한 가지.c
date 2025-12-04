#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", b / a * c);

	return 0;
}