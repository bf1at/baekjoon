#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int t, s;
	scanf("%d %d", &t, &s);
	if (t > 11 && t < 17 && s == 0)
		printf("320");
	else
		printf("280");
	return 0;
}