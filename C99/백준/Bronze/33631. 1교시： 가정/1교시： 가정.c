#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int siu[4], ingr[4], n, a, b, cookie = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &siu[i]);
	}
	for (int i = 0; i < 4; i++) {
		scanf("%d", &ingr[i]);
	}
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		if (a == 1) {
			int flag = 1;
			for (int i = 0; i < 4; i++) {
				if (siu[i] < ingr[i] * b) {
					flag = 0;
					break;
				}
			}
			if (flag == 0)
				printf("Hello, siumii\n");
			else {
				for (int i = 0; i < 4; i++) {
					siu[i] -= ingr[i] * b;
				}
				cookie += b;
				printf("%d\n", cookie);
			}
		}
		else {
			siu[a - 2] += b;
			printf("%d\n", siu[a - 2]);
		}
	}
	return 0;
}