#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, moeum=0;
	char s[51];
	scanf("%d %s", &n, &s);
	for (int i = 0; i < n; i++) {
		if (s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u')
			moeum++;
	}
	printf("%d", moeum);
	return 0;
}