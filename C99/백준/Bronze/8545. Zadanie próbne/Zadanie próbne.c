#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char a[4] = "";
	gets(a);
	for (int i = 2; i >= 0; i--)
		printf("%c", a[i]);
	return 0;
}