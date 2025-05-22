#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int n, e, son[100], power = 0;
	scanf("%d %d", &n, &e);
	for (int i = 0; i < n; i++) {
		scanf("%d", &son[i]);
		if (son[i] < 0 && e != 2) {
			continue;
		}
		int sonp = 1;
		for (int j = 0; j < e; j++) {
			sonp *= son[i];
		}
		power += sonp;
	}
	printf("%d", power);
	return 0;
}