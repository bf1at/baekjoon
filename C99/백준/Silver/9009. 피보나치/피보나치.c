#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fib_iter(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int pp = 0;
    int p = 1;
    int result = 0;
    for (int i = 2; i <= n; i++) {
        result = p + pp;
        pp = p;
        p = result;
    }
    return result;
}

int find_fibos(int n) {
    int f;
    if (n == 0)
        return 0;
    if (n == 1) {
        printf("1 ");
        return 0;
    }
    f = find_max_fibo(n);
    if (f == n) {
        printf("%d ", f);
        return 0;
    }
    else if (n - f > 0) {
        find_fibos(n - f);
        printf("%d ", f);
        return 0;
    }
}

int find_max_fibo(int n) {
    int fi = 1;
    while (1) {
        if (fib_iter(fi) <= n)
            fi++;
        else
            return fib_iter(fi-1);
    }
}

int main() {
    int n, t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        find_fibos(n);
        printf("\n");
    }
	return 0;
}