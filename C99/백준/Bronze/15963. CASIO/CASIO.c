#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main() {
	int h, m;
	scanf("%d %d", &h, &m);
	if (h == m)
		printf("1");
	else
		printf("0");
	return 0;
}