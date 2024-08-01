#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	long long a, b;
	while (1) {
		scanf("%lld %lld", &a, &b);
		if (a > b)
			printf("Yes\n");
		else if (a == 0 && b == 0)
			break;
		else
			printf("No\n");
	}
	return 0;
}