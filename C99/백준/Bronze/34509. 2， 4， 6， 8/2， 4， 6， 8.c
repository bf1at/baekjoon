#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	for (int n = 10; n < 100; n++) {
		if ((n % 10 * 10 + n / 10) % 4 == 0) {
			if ((n % 10 + n / 10) % 6 == 0) {
				if (n % 10 != 8 && n / 10 != 8)
					printf("%d ", n);
			}
		}
	}
	return 0;
}