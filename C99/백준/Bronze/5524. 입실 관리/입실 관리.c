#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	getchar();
	while (n--) {
		char s[20];
		scanf("%s", s);
		for (int i = 0; i < strlen(s); i++) {
			printf("%c", tolower(s[i]));
		}
		printf("\n");
	}
}