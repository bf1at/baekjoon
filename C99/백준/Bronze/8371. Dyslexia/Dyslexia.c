#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int n, e=0;
	char s1[100001], s2[100001];
	scanf("%d", &n);
	getchar();
	scanf("%s %s", s1, s2);
	for (int i = 0; i < n; i++) {
		if (s1[i] != s2[i])
			e++;
	}
	printf("%d", e);

	return 0;
}