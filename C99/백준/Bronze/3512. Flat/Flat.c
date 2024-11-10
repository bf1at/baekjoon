#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n, c, ai[10], a1 = 0, a2 = 0;
	double a3=0.0;
	char ac[10][20];
	scanf("%d %d", &n, &c);
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &ai[i], ac[i]);
		if (strcmp(ac[i], "bedroom") == 0) {
			a2 += ai[i];
			a1 += ai[i];
			a3 += ai[i];
		}
		else if (strcmp(ac[i], "balcony") == 0) {
			a1 += ai[i];
			a3 += ai[i] / 2.0;
		}
		else {
			a1 += ai[i];
			a3 += ai[i];
		}
	}
	a3 *= c;
	printf("%d\n%d\n", a1, a2);
	if (a3 == (int)a3)
		printf("%.0lf", a3);
	else
		printf("%.1lf", a3);
	return 0;
}