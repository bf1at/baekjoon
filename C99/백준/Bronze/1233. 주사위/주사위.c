#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int s1, s2, s3;
	scanf("%d %d %d", &s1, &s2, &s3);
	int sum[81] = { 0 };
	for (int i = 1; i <= s1; i++) {
		for (int j = 1; j <= s2; j++) {
			for (int k = 1; k <= s3; k++) {
				sum[i + j + k]++;
			}
		}
	}
	int max = 0, maxs = 0;
	for (int i = 1; i < 81; i++) {
		if (sum[i] > max) {
			max = sum[i];
			maxs = i;
		}
		else if (sum[i] == max && i < maxs) {
			maxs = i;
		}
	}
	printf("%d", maxs);

	return 0;
}
