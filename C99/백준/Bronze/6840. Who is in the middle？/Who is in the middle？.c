#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void change(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2 - i; j++) {
			if (a[j] >= a[j + 1])
				change(&a[j], &a[j + 1]);
		}
	}
	printf("%d", a[1]);
	return 0;
}