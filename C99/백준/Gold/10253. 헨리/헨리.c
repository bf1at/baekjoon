#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int henry(int a, int b) {
//	int x = 1;
//	while (1) {
//		if (a * x >= b) {
//			if (a * x == b)
//				return x;
//			else
//				return henry(a * x - b, b * x);
//		}
//		x++;
//	}
//}

int henry(int a, int b) {
	int x = b / a;
	if (a * x == b)
		return x;
	else {
		x++;
		return henry(a * x - b, b * x);
	}
}

int main() {
	int t;
	int a, b;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &a, &b);
		printf("%d\n", henry(a, b));
	}
	return 0;
}