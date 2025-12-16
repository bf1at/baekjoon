#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int n, flag = 0;
	scanf("%d", &n);
	if (n <= 9)
		flag = 1;
	else {
		for (int i = 2; i <= 9; i++) {
			for (int j = 1; j <= 9; j++) {
				if (i * j == n) {
					flag = 1;
					break;
				}
			}
			if (flag == 1)
				break;
		}
	}
	printf("%d", flag);

	return 0;
}