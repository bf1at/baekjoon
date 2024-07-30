#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char arr[100] = "";
	int i;
	gets(arr);
	for (i = 1; i <= 100; i++)
		if (arr[i] == '\0')
			break;
	printf("%d", i);
	return 0;
}