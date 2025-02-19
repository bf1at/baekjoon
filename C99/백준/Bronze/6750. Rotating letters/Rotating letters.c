#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	char s[40];
	scanf("%s", s);
	for (int i = 0; i < strlen(s); i++) {
		if (!(s[i] == 'I' || s[i] == 'O' || s[i] == 'S'
			|| s[i] == 'H' || s[i] == 'Z' || s[i] == 'X' || s[i] == 'N')) {
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}