#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, d;
	int p, m, n;
	int a1[1000], a2[1000];

	scanf("%d %d %d %d", &a, &b, &c, &d);
	scanf("%d %d %d", &p, &m, &n);

	for (int i = 1; i < 1000; i++) {
		if ((i % (a + b) <= a)&& (i % (a + b) !=0))
			a1[i] = 1;
		else
			a1[i] = 0;
		if ((i % (c + d) <= c)&&( i % (c + d)!=0))
			a2[i] = 1;
		else
			a2[i] = 0;
	}

	if (a1[p] == 1 && a2[p] == 1)
		printf("2\n");
	else if (a1[p] == 1 || a2[p] == 1)
		printf("1\n");
	else
		printf("0\n");

	if (a1[m] == 1 && a2[m] == 1)
		printf("2\n");
	else if (a1[m] == 1 || a2[m] == 1)
		printf("1\n");
	else
		printf("0\n");

	if (a1[n] == 1 && a2[n] == 1)
		printf("2\n");
	else if (a1[n] == 1 || a2[n] == 1)
		printf("1\n");
	else
		printf("0\n");


	return 0;
}