#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	char s[100];
	scanf("%s", s);
	int a[200] = { 0 };
	for (int i = 0; i < strlen(s); i++) {
		a[s[i]]++;
	}
	for (int i = 'a'; i <= 'z'; i++) {
		printf("%d ", a[i]);
	}
	return 0;
} 