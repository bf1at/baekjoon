#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int t, s, h;
	scanf("%d %d %d", &t, &s, &h);
	for (int i = 0; i < t; i++) {
		for (int k = 0; k < 3; k++) {
			printf("*");
			if (k == 2)
				break;
			for (int j = 0; j < s; j++) {
				printf(" ");
			}
		}
		printf("\n");
	}
	for (int i = 0; i < 3 + s * 2; i++)
		printf("*");
	printf("\n");
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < s + 1; j++)
			printf(" ");
		printf("*");
		if (i == h - 1)
			break;
		printf("\n");
	}
	return 0;
}