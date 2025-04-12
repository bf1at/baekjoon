#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a1, a2, a3, n, sn;
	while (1) {
		sn = 0;
		scanf("%d %d %d %d", &n, &a1, &a2, &a3);
		if (n == 0)
			break;
		if (a2 - a1 == a3 - a2) {
			int d = a2 - a1;
			sn = n * (2 * a1 + (n - 1) * d) / 2;
		}
		else {
			int r = a2 / a1;
			int rn = 1;
			for (int i = 1; i <= n; i++)
				rn *= r;
			sn = a1 * (rn - 1) / (r - 1);
		}
		printf("%d\n", sn);
	}

	return 0;
}