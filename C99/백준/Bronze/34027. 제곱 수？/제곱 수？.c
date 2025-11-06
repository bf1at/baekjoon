#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int n, a;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if ((int)sqrt(a) * (int)sqrt(a) == a)
			printf("1\n");
		else
			printf("0\n");
	}

	return 0;
}