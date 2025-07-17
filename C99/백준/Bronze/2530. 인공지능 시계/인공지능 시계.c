#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int h, m, s;
	int t;
	scanf("%d %d %d %d", &h, &m, &s, &t);
	s += t % 60;
	if (s >= 60) {
		m++;
		s -= 60;
	}
	t /= 60;
	m += t % 60;
	if (m >= 60) {
		h++;
		m -= 60;
	}
	t /= 60;
	h += t;
	if (h >= 24) {
		h %= 24;
	}
	printf("%d %d %d", h, m, s);
	return 0;
} 