#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char s[20] = "WelcomeToSMUPC";
	int n;
	scanf("%d", &n);
	printf("%c", s[(n-1) % strlen(s)]);
	return 0;
}