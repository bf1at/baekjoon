#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int n, x, s, c[100], p[100], flag=0;
	scanf("%d %d %d", &n, &x, &s);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &c[i], &p[i]);
		if (x >= c[i] && p[i] > s) {
			flag = 1;
		}
	}
	if (flag == 1)
		printf("YES");
	else
		printf("NO");

	return 0;
}