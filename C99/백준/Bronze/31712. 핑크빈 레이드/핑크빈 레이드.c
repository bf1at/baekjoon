#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int c1, c2, c3, d1, d2, d3, h;
	scanf("%d %d %d %d %d %d %d", &c1, &d1, &c2, &d2, &c3, &d3, &h);
	int i = 0;
	while (1) {
		if (i % c1 == 0)
			h -= d1;
		if (i % c2 == 0)
			h -= d2;
		if (i % c3 == 0)
			h -= d3;
		if (h <= 0)
			break;
		i++;
	}
	printf("%d", i);
	return 0;
}