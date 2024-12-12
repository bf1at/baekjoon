#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	int sum2 = sum * sum;
	printf("%d\n%d\n%d", sum, sum2, sum2);
	return 0;
}