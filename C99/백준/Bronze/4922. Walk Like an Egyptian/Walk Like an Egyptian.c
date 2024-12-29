#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n;
	while (1) {
		int sum = 1, plus = 2; 
		scanf("%d", &n);
		if (n == 0)
			break;
		for (int i = 2; i <= n; i++) {
			sum += plus;
			plus += 2;
		}
		printf("%d => %d\n", n, sum);
	}
	return 0;
}