#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int n;
	char s[1000];
	scanf("%d", &n);
	while (n--) {
		scanf("%s", &s);
		if (s[strlen(s)-1] % 2 == 0)
			printf("even\n");
		else
			printf("odd\n");
	}
	return 0;
}