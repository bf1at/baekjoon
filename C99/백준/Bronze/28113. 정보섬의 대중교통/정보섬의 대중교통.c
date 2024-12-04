#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n, a, b;
	int bb;
	scanf("%d %d %d", &n, &a, &b);
	bb = n > b ? n : b;
	if (a < bb)
		printf("Bus");
	else if (a == bb)
		printf("Anything");
	else
		printf("Subway");
	return 0;
}