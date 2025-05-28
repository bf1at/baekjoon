#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	char s[10], g[10] = "2765432";
	char c;
	int sum = 0;
	scanf("%s", &s);
	for (int i = 0; i < 7; i++) {
		sum += (s[i] - '0') * (g[i] - '0');
	}
	sum %= 11;
	if (sum < 10 && sum>0)
		printf("%c", 'A' + sum - 1);
	else if (sum == 0)
		printf("J");
	else if (sum == 10)
		printf("Z");

	return 0;
}