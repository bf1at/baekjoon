#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int n, d;
	char s[11];
	scanf("%d %d", &n, &d);
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		int l = strlen(s);
		if (d == 1) {
			for (int j = 0; j < l; j++) {
				if (s[j] == 'd')
					printf("q");
				else if (s[j] == 'b')
					printf("p");
				else if (s[j] == 'q')
					printf("d");
				else if (s[j] == 'p')
					printf("b");
			}
		}
		else if (d == 2) {
			for (int j = 0; j < l; j++) {
				if (s[j] == 'd')
					printf("b");
				else if (s[j] == 'b')
					printf("d");
				else if (s[j] == 'q')
					printf("p");
				else if (s[j] == 'p')
					printf("q");
			}
		}
		printf("\n");
	}

	return 0;
}