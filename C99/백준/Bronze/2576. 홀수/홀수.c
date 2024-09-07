#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main() {
	int a[7] = { 0 };
	int sum=0, min=100, hol=0;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &a[i]);
		if (a[i] % 2 == 1) {
			sum += a[i];
			if (min > a[i])
				min = a[i];
			hol += 1;
		}
	}
	if (hol == 0)
		printf("%d", -1);
	else
		printf("%d\n%d", sum, min);
	return 0;
}