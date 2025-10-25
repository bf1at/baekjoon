#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	long long n, m, a, b, chair;
	scanf("%lld %lld %lld %lld", &n, &m, &a, &b);
	chair = n * 3 - m;
	if (chair > 0)
		printf("%lld", chair*a+b);
	else
		printf("0");
	return 0;
}