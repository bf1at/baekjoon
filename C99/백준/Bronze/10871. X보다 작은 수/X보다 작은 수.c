#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main() {
	int a[10000] = { 0 }, b[10000] = { 0 };
	int n, x, bb=0;
	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i] < x) {
			b[bb] = a[i];
			bb++;
		}
	}
	for (int i = 0; i < bb; i++)
		printf("%d ", b[i]);
	return 0;
}