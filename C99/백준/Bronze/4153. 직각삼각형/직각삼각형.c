#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n[3], temp;
	while (1) {
		scanf("%d %d %d", &n[0], &n[1], &n[2]);
		if (n[0] == 0 && n[1] == 0 && n[2] == 0)
			break;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2 - i; j++) {
				if (n[j] > n[j + 1]) {
					temp = n[j];
					n[j] = n[j + 1];
					n[j + 1] = temp;
				}
			}
		}
		if (n[0] * n[0] + n[1] * n[1] == n[2] * n[2])
			printf("right\n");
		else
			printf("wrong\n");
	}
	return 0;
}