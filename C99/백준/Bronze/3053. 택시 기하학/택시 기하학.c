#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int r;
	double pi = 3.141592653589793;
	double taxi = 2.0;
	scanf("%d", &r);
	printf("%lf\n", r * r * pi);
	printf("%lf", r * r * 2.0);
	
	return 0;
}