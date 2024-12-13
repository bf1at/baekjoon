#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int a1, a2, a3, b1, b2, b3;
	scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &b1, &b2, &b3);
	int max = a1 * 3 + a2 * 20 + a3 * 120;
	int mel = b1 * 3 + b2 * 20 + b3 * 120;
	if (max > mel)
		printf("Max");
	else if (max < mel)
		printf("Mel");
	else
		printf("Draw");
	return 0;
}