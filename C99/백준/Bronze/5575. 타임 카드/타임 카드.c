#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int h1, h2, m1, m2, s1, s2, hour[3], min[3], sec[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);
		hour[i] = h2 - h1;
		min[i] = m2 - m1;
		sec[i] = s2 - s1;
		if (sec[i] < 0) {
			min[i]--;
			sec[i] += 60;
		}
		if (min[i] < 0) {
			hour[i]--;
			min[i] += 60;
		}
	}
	for (int i = 0; i < 3; i++)
		printf("%d %d %d\n", hour[i], min[i], sec[i]);
	
	return 0;
}