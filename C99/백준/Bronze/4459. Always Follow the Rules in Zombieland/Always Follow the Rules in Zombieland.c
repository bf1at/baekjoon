#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int q, r, n;
	char rule[50][66];
	scanf("%d", &q);
	getchar();
	for (int i = 0; i < q; i++) {
		gets(rule[i]);
	}
	scanf("%d", &r);
	for (int i = 0; i < r; i++) {
		scanf("%d", &n);
		if (n > 0 && n <= q)
			printf("Rule %d: %s\n", n, rule[n-1]);
		else
			printf("Rule %d: No such rule\n", n);
	}
	return 0;
}