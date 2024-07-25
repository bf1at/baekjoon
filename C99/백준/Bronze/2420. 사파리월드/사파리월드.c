#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	long long a = 0, b = 0;
	scanf("%lld %lld", &a, &b);
	if (a > b)
		printf("%lld", a-b);
	else if (a <= b)
		printf("%lld", b-a);
	return 0;
}