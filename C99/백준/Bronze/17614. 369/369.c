#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int n, sum = 0;
	char s[10];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sprintf(s, "%d", i);
		for (int j = 0; j < strlen(s); j++) {
			if (s[j] == '3' || s[j] == '6' || s[j] == '9')
				sum++;
		}
	}
	printf("%d", sum);

	return 0;
}