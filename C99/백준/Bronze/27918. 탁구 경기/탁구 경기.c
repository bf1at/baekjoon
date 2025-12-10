#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int d = 0, p = 0, n, win = 0;
	char c;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		getchar();
		scanf("%c", &c);
		if (win == 0) {
			if (c == 'D')
				d++;
			else
				p++;
			if (d - p >= 2) {
				win = 1;
			}
			else if (p - d >= 2) {
				win = 2;
			}
		}
	}
	printf("%d:%d", d, p);

	return 0;
}