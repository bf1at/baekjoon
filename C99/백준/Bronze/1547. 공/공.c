#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void) {
	int arr[4] = { 0,1,2,3 };
	int n, n1, n2;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &n1, &n2);
		swap(&arr[n1], &arr[n2]);
	}
	for (int i = 1; i <= 3; i++) {
		if (arr[i] == 1)
			printf("%d", i);
	}
	return 0;
}