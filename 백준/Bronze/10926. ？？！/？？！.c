#define _CRT_SECJRE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a[50] = "";
	gets(a);
	printf("%s??!", a);
	return 0;
}