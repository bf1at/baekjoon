#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char str[101] = "";
	gets(str);
	for (int i = 0; i < 100;) {
		for (int j = 0; j < 10; j++) {

			printf("%c", str[i]);
			i++;
			if (str[i] == '\0') break;
		}
		if (str[i] == '\0') break;
		printf("\n");
	}
	return 0;
}