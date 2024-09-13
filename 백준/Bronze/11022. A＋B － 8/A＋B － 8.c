#define _CRT_SECJRE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b,n,c=1;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", c, a, b, a+b);
		c++;
	}
}