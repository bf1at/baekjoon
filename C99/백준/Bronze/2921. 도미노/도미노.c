#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main() {
	int n, sum=0;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		for (int j = i; j <= n; j++)
			sum += i + j;
	}
	printf("%d", sum);
	return 0;
}