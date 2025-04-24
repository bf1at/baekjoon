#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	double w, h;
	scanf("%lf %lf", &w, &h);
	double bmi = w / (h * h);
	if (bmi > 25)
		printf("Overweight");
	else if (bmi >= 18.5)
		printf("Normal weight");
	else
		printf("Underweight");
	
	return 0;
}