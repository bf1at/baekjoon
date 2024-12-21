#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float t1, t2;
	scanf("%f", &t1);
	while (1) {
		scanf("%f", &t2);
		if (t2 == 999)
			break;
		printf("%.2f\n", t2 - t1);
		t1 = t2;
	}
	return 0;
}