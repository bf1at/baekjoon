#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	if (n > 198)
		printf("0");
	else
		printf("%d", 199 - n);
	return 0;
}