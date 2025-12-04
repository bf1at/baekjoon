#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int y, c, p;
	scanf("%d %d %d", &y, &c, &p);
	int n = y;
	if (n > c / 2)
		n = c / 2;
	if (n > p)
		n = p;

	printf("%d", n);

	return 0;
}