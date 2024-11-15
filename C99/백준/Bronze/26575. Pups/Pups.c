#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n;
	double a, b, c;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf %lf %lf", &a, &b, &c);
		printf("$%.2lf\n", a * b * c);
	}
	return 0;
}