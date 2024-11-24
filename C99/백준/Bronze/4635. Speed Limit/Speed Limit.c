#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n, s[10], t[10], mile = 0;;
	while (1) {
		scanf("%d", &n);
		if (n == -1)
			break;
		for (int i = 0; i < n; i++) {
			scanf("%d %d", &s[i], &t[i]);
			if (i == 0)
				mile += s[i] * t[i];
			else
				mile += s[i] * (t[i] - t[i - 1]);
		}
		printf("%d miles\n", mile);
		mile = 0;
	}
	return 0;
}