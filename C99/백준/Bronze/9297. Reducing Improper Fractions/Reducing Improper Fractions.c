#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int t, a, b, i, n;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		scanf("%d %d", &a, &b);
		printf("Case %d: ", i);
		if (a / b > 0) {
			if (a % b == 0)
				printf("%d", a / b);
			else
				printf("%d %d/%d", a / b, a % b, b);
		}
		else {
			if (a % b == 0)
				printf("0");
			else
				printf("%d/%d", a % b, b);
		}
		printf("\n");
	}

	return 0;
}