#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int a, v, i;
	scanf("%d", &a);
	v = a / 5;
	i = a % 5;
	for (int j = 0; j < v; j++)
		printf("V");
	for (int j = 0; j < i; j++)
		printf("I");
	return 0;
}