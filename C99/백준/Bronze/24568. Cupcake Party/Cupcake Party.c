#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int a, b, r;
	scanf("%d %d", &a, &b);
	r = a * 8 + b * 3 - 28;
	if (r >= 0)
		printf("%d", r);
	else
		printf("0");
	return 0;
}