#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int h, i, a, r, c;
	scanf("%d %d %d %d %d", &h, &i, &a, &r, &c);
	printf("%d", h * i - a * r * c);
	return 0;
}