#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int n, l;
	int a[4] = { 0 };
	while (1) {
		scanf("%d", &n);
		if (n == 0)
			break;
		l = 17;
		a[0] = n / 1000;
		n %= 1000;
		a[1] = n / 100;
		n %= 100;
		a[2] = n / 10;
		a[3] = n % 10;
		for (int i = 0; i < 4; i++) {
			if (a[i] == 0)
				l += 1;
			else if (a[i] == 1)
				l -= 1;
		}
		if (a[0] == 0) {
			if (a[1] == 0) {
				if (a[2] == 0)
					l -= 15;
				else
					l -= 10;
			}
			else
				l -= 5;
		}
		printf("%d\n", l);
	}
	return 0;
}