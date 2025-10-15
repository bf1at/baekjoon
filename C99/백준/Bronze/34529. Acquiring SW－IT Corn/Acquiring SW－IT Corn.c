#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	int x, y, z, u, v, w;
	scanf("%d %d %d %d %d %d", &x, &y, &z, &u, &v, &w);
	printf("%d", x * u/100 + y * v/50 + z * w/20);
	return 0;
}