#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	int t, a, b, c;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		char rt[10];
		scanf("%d %d %d", &a, &b, &c);
		if (a > b && a > c) {
			if (a * a == b * b + c * c)
				strcpy(rt, "YES");
			else
				strcpy(rt, "NO");
		}
		else if (b > a && b > c) {
			if (b * b == a * a + c * c)
				strcpy(rt, "YES");
			else
				strcpy(rt, "NO");
		}
		else {
			if (c * c == a * a + b * b)
				strcpy(rt, "YES");
			else
				strcpy(rt, "NO");
		}
		printf("Case #%d: %s\n", i, rt);
	}

	return 0;
}