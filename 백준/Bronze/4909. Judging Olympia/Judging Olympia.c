#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int s[6];
	while (1) {
		int max = -1, min = 11, zero=0,sum=0;
		for (int i = 0; i < 6; i++) {
			scanf("%d", &s[i]);
			if (s[i] < min)
				min = s[i];
			if (s[i] > max)
				max = s[i];
			if (s[i] == 0)
				zero++;
			sum += s[i];
		}
		if (zero == 6)
			break;
		float avg = (sum - min - max)/4.0;
		printf("%g\n", avg);
	}
	return 0;
}