#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int a[7];
	int n;
	int sum = 0;
	int min = 100;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 7; j++) {
			scanf("%d", &a[j]);
			if (a[j] % 2 == 0) {
				sum += a[j];
				if (a[j] < min)
					min = a[j];
			}
		}
		printf("%d %d\n", sum, min);
		sum = 0;
		min = 100;
	}
	return 0;
}