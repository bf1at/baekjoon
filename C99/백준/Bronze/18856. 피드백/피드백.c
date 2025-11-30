#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int is_prime(int n) {
    if (n < 2)
		return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
	int n, a[51];
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		a[i] = i;
	}
	for (int i = a[n - 1] + 1; i < 1000; i++) {
		if (is_prime(i)) {
			a[n] = i;
			break;
		}
	}
	printf("%d\n", n);
	for (int i = 1; i <= n; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}