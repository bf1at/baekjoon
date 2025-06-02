#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int a = 100, b = 100, n,aDice,bDice;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d", &aDice, &bDice);
		if (aDice > bDice)
			b -= aDice;
		else if (aDice < bDice)
			a -= bDice;
	}
	printf("%d\n%d", a, b);

	return 0;
} 