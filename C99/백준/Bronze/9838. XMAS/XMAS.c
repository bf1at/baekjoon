#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int g[20000];
	int n, a;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		g[a - 1] = i+1;
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", g[i]);
	}
	return 0;
}