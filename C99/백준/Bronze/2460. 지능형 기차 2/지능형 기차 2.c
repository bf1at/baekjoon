#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main() {
	int a, b, p = 0, max = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d %d", &a, &b);
		p -= a;
		p += b;
		if (p > max)
			max = p;
	}
	printf("%d", max);
	return 0;
}