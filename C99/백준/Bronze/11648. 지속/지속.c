#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	long long n, count = 0;
	char s[100];
	scanf("%s", &s);
	while (strlen(s) > 1) {
		n = 1;
		for (int i = 0; i < strlen(s); i++) {
			n *= (s[i] - '0');
		}
		snprintf(s, sizeof(s), "%lld", n);
		count++;
	}
	printf("%lld", count);
	return 0;
} 