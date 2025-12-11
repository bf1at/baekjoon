#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	char s[11], a[11];
	int n, sum = 0;
	scanf("%s", s);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", a);
		sum++;
		for (int i = 0; i < 5; i++) {
			if (s[i] == a[i]) {

			}
			else {
				sum--;
				break;
			}
		}
	}
	printf("%d", sum);

	return 0;
}