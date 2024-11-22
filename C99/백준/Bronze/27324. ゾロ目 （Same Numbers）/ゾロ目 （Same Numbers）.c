#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int a;
	scanf("%d", &a);
	if (a / 10 == a % 10)
		printf("1");
	else
		printf("0");
	return 0;
}