#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int n;
	char s[1000] = "";
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		gets(s);
		printf("%c", s[0]);
		int j = 1;
		while (1) {
			if (s[j] == '\0') {
				printf("%c\n", s[j-1]);
				break;
			}
			j++;
		}
	}
	return 0;
}