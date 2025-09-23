#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int t, h, w;
	double bmi;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &h, &w);
		bmi = w / (h * h / 10000.0);
		if (h <= 140)
			printf("6");
		else if (h < 146)
			printf("5");
		else if (h < 159)
			printf("4");
		else if (h < 161) {
			if (bmi >= 16 && bmi < 35)
				printf("3");
			else
				printf("4");
		}
		else if (h < 204) {
			if (bmi >= 20 && bmi < 25)
				printf("1");
			else if ((bmi >= 18.5 && bmi < 20) || (bmi >= 25 && bmi < 30))
				printf("2");
			else if ((bmi >= 16 && bmi < 18.5) || (bmi >= 30 && bmi < 35))
				printf("3");
			else
				printf("4");
		}
		else
			printf("4");
		printf("\n");
	}

	return 0;
}