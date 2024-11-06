#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n, d, b[64];
	int j;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		memset(b, -1, sizeof(b));
		scanf("%d", &d);
		for (j = 0; d != 0; j++) {
			b[j] = d % 2;
			d /= 2;
		}
		for (j=0; b[j]!=-1; j++) {
			if (b[j] == 1)
				printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}