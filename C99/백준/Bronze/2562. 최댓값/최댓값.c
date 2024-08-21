#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int arr[9] = { 0 };
	int max = 0, num = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		if (max < arr[i]) {
			max = arr[i];
			num = i;
		}
	}
	printf("%d\n", max);
	printf("%d", num+1);
	return 0;
}