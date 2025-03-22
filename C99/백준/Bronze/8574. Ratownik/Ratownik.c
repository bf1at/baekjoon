#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int n, k, x, y, kid = 0;
	scanf("%d %d %d %d", &n, &k, &x, &y);
	while (n--) {
		int xi, yi;
		scanf("%d %d", &xi, &yi);
		int xd = x - xi;
		int yd = y - yi;
		double d = sqrt(xd * xd + yd * yd);
		if (d > k)
			kid++;
	}
	printf("%d", kid);
}