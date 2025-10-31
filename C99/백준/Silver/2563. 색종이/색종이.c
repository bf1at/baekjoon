#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int paper[100][100] = { 0 };
	int x, y, n, sum=0;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d", &x, &y);
		for (int i = x; i < (x + 10) && 100; i++) {
			for (int j = y; j < (y + 10) && 100; j++) {
				paper[i][j] = 1;
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j] == 1)
				sum++;
		}
	}
	printf("%d", sum);
	return 0;
}