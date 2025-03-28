#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long x, k, s1, s2, s3, s;
	scanf("%lld %lld", &x, &k);
	x *= 1000;
	k *= 1000;
	s1 = k + k * 2 + k * 4;
	s2 = k / 2 + k + k * 2;
	s3 = k + k / 2 + k / 4;
	if (s1 <= x)
		s = s1;
	else if (s2 <= x)
		s = s2;
	else if (s3 <= x)
		s = s3;
	else
		s = 0;
	printf("%lld", s);
	return 0;
}