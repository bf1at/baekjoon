#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int k, n, t, time = 0, bomb;
	char z;
	scanf("%d %d", &k, &n);
	while (n--) {
		scanf("%d %c", &t, &z);
		time += t;
		if (time == 210) {
			if (z == 'T') {
				bomb = k++;
				break;
			}
		}
		else if (time > 210) {
			bomb = k;
			break;
		}
		if (z == 'T')
			k++;
	}
	bomb %= 8;
	if (bomb == 0)
		bomb = 8;
	printf("%d", bomb);
	return 0;
}