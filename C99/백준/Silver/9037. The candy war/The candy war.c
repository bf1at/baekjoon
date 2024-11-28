#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int t, n, c[10], cc[10] = { 0 }, cycle = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		cycle = 0;
		for (int j = 0; j < n; j++)
			scanf("%d", &c[j]);
		while (1) {
			for (int k = 0; k < n; k++) {		// 사탕 짝수화
				if (c[k] % 2 == 1)
					c[k]++;
			}
			int s = 0;
			for (int k = 0; k < n - 1; k++) {	// 사탕 개수 같을 경우
				if (c[k] == c[k + 1])			// 반복 중단
					s++;
			}
			if (s == n-1)
				break;
			for (int k = 0; k < n; k++) {		// 사탕 분배
				if (k == n - 1) {
					cc[0] += c[k] / 2;
					c[k] /= 2;
				}
				else {
					cc[k + 1] += c[k] / 2;
					c[k] /= 2;
				}
			}
			for (int l = 0; l < n; l++) {
				c[l] += cc[l];
				cc[l] = 0;
			}
			cycle++;							// 한 사이클
		}
		printf("%d\n", cycle);
	}
	return 0;
}