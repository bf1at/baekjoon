#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n, a[100], b[100], n1=1, n2=1, n3=1, n4=2;
	scanf("%d", &n);
	for (int i = 1; i <= 100; n1++, n2 += 2) {
		for (int j = 0; j < n2&&i<=100; j++) {
			a[i] = n1;
			i++;
		}
	}
	for (int i = 1; i <= 100; n3++, n4 += 2) {
		for (int j = 0; j < n4&&i<=100; j++) {
			b[i] = n3;
			i++;
		}
	}
	printf("%d %d", a[n], b[n]);
	return 0;
}