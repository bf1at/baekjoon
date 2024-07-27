#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int x, y, w, h, lx, ly, min;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	if (x < (w - x))
		lx = x;
	else
		lx = w - x;
	if (y < (h - y))
		ly = y;
	else
		ly = h - y;
	min = lx < ly ? lx : ly;
	printf("%d", min);
	return 0;
}