#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int score1[4], score2[4], sum1 = 0, sum2 = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &score1[i]);
		sum1 += score1[i];
	}
	for (int i = 0; i < 4; i++) {
		scanf("%d", &score2[i]);
		sum2 += score2[i];
	}
	if (sum1 < sum2)
		sum1 = sum2;
	printf("%d", sum1);
	
	return 0;
}