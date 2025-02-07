#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	char s[100];
	scanf("%s", s);
	if (strlen(s) < 4)
		printf("%s", s);
	else if (strlen(s) < 7) {
		for (int i = 0; i < strlen(s) - 3; i++)
			printf("%c", s[i]);
		printf(",");
		for (int i = strlen(s) - 3; i < strlen(s); i++)
			printf("%c", s[i]);
	}
	else if (strlen(s) < 10) {
		for (int i = 0; i < strlen(s) - 6; i++)
			printf("%c", s[i]);
		printf(",");
		for (int i = strlen(s) - 6; i < strlen(s) - 3; i++)
			printf("%c", s[i]);
		printf(",");
		for (int i = strlen(s) - 3; i < strlen(s); i++)
			printf("%c", s[i]);
	}
	else {
		for (int i = 0; i < strlen(s) - 9; i++)
			printf("%c", s[i]);
		printf(",");
		for (int i = strlen(s) - 9; i < strlen(s) - 6; i++)
			printf("%c", s[i]);
		printf(",");
		for (int i = strlen(s) - 6; i < strlen(s) - 3; i++)
			printf("%c", s[i]);
		printf(",");
		for (int i = strlen(s) - 3; i < strlen(s); i++)
			printf("%c", s[i]);
	}

	return 0;
}