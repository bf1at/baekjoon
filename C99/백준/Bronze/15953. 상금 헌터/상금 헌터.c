#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	int f1[101] = { 0 }, f2[65] = { 0 }, fi = 1;
	int f1m[6] = { 500,300,200,50,30,10 }, f2m[6] = { 512,256,128,64,32 };
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j < i+1; j++) {
			f1[fi++] = f1m[i];
		}
	}
	fi = 1;
	int k = 1;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < k; j++) {
			f2[fi++] = f2m[i];
		}
		k *= 2;
	}
	int a, b, n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", (f1[a] + f2[b])*10000);
	}

	return 0;
}