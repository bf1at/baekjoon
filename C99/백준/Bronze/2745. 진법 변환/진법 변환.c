#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char n[100];
	int b, sum=0;
	scanf("%s %d", n, &b);
	int l = strlen(n);
	for (int i = 0; i < l; i++) {
		int a = 1;
		for (int j = 0; j < l - i - 1; j++)
			a *= b;
		if (n[i] <= '9')
			sum += a * (n[i] - '0');
		else
			sum += a * (n[i] - 'A' + 10);
	}
	printf("%d", sum);

	return 0;
}