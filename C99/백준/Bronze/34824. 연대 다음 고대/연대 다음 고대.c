#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	char s[100][51];
	int n, y, k;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		getchar();
		scanf("%s", s[i]);
		if (!strcmp(s[i], "yonsei"))
			y = i;
		if (!strcmp(s[i], "korea"))
			k = i;
	}
	if (y < k)
		printf("Yonsei Won!");
	else
		printf("Yonsei Lost...");

	return 0;
}