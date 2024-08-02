#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char aah[999] = "";
	char aah2[999] = "";
	int a = 0, b = 0;
	gets(aah);
	gets(aah2);
	for (int i = 0; i < 999; i++) {
		if (aah[i] == 'h')
			break;
		a++;
	}
	for (int i = 0; i < 999; i++) {
		if (aah2[i] == 'h')
			break;
		b++;
	}
	if (a >= b)
		printf("go");
	else
		printf("no");
	return 0;
}