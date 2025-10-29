#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a >= b) {
		for (int i = a; i > 0; i--) {
			if (i <= b)
				printf("2");
			else
				printf("1");
		}
	}
	else {
		for (int i = b; i > 0; i--) {
			if (i <= a)
				printf("2");
			else
				printf("1");
		}
	}

	return 0;
}