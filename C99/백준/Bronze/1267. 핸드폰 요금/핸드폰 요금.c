#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, sum1 = 0, sum2 = 0;
	int time[20] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &time[i]);
	for (int i = 0; i < n; i++) {
		sum1 += ((time[i] / 30) + 1) * 10;
		sum2 += ((time[i] / 60) + 1) * 15;
	}
	if (sum1 < sum2)
		printf("Y %d", sum1);
	else if (sum1 == sum2)
		printf("Y M %d", sum1);
	else
		printf("M %d", sum2);
	return 0;
}