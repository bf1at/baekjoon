#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	if (m*100 >= n*81)
		printf("yaho");
	else
		printf("no");

	return 0;
}