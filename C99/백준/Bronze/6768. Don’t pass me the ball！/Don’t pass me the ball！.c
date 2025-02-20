#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	if (n < 4) {
		printf("0");
		return 0;
	}
	printf("%d", (n - 1) * (n - 2) * (n - 3) / (3 * 2));
	return 0;
}