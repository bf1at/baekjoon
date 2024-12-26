#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int a, b, c;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;
		if (a + c == 2 * b)
			printf("AP %d\n", c + (c - b));
		else
			printf("GP %d\n", c * (c / b));
	}
	return 0;
}