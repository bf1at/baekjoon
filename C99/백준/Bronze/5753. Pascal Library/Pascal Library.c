#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int n, d, m, yn=0;
	while (1) {
		int i[500] = { 0 };
		yn = 0;
		scanf("%d %d", &n, &d);
		if (n == 0 && d == 0)
			break;
		for(int k=0; k<d; k++) {
			for (int j = 0; j < n; j++) {
				scanf("%d", &m);
				if (m == 1)
					i[j]++;
			}
		}
		for (int j = 0; j < n; j++) {
			if (i[j] == d)
				yn++;
		}
		if (yn != 0)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}