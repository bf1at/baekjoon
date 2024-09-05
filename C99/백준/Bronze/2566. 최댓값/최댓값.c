#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main() {
	int a[9][9] = { 0 };
	int max = 0, h=0, y=0;
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++) {
			scanf("%d", &a[i][j]);
			if (a[i][j] > max) {
				max = a[i][j];
				h = i;
				y = j;
			}
		}
	printf("%d\n%d %d", max, h + 1, y + 1);
	return 0;
}