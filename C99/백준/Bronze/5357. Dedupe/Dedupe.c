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
		char s[101], c;
		int di = 0;
		scanf("%s", s);
		for (int i = 0; i < strlen(s); i++) {
			if (i == 0) {
				c = s[i];
				printf("%c", s[i]);
			}
			else {
				if (s[i] != c) {
					printf("%c", s[i]);
					c = s[i];
				}
			}
		}
		printf("\n");
	}

	return 0;
}