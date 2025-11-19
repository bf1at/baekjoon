#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int n, m, a[100] = { 0 };
	char c;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf(" %c", &c);
			if (c == 'X')
				a[j]++;
		}
	}
	for (int i = 0; i < m; i++) {
		if (a[i] == n) {
			printf("%d", i + 1);
			return 0;
		}
	}
	printf("ESCAPE FAILED");

	return 0;
}