#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	char s[13] = "ABCBCDCDADAB";
	int n, a;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &a);
		printf("%c\n", s[(a - 1) % 12]);
	}
	return 0;
}