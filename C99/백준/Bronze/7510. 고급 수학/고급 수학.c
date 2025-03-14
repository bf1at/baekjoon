#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void change(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int a, b, c, n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		scanf("%d %d %d", &a, &b, &c);
		if (a > b)
			change(&a, &b);
		if (b > c)
			change(&b, &c);
		if (a > b)
			change(&a, &b);
		if (a * a + b * b == c * c) {
			printf("Scenario #%d:\nyes\n\n", i);
		}
		else {
			printf("Scenario #%d:\nno\n\n", i);
		}
	}

	return 0;
}