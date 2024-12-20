#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char s[81];
	while (1) {
		gets(s);
		if (strcmp(s, "***") == 0)
			break;
		for (int i = strlen(s) - 1; i >= 0; i--)
			printf("%c", s[i]);
		printf("\n");
	}
	
	return 0;
}