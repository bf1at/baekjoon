#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n=0, sum=0;
	scanf("%d", &n);
	while (n--) {
		int a;
		scanf("%d", &a);
		if (a % 2 == 1)
			sum++;
	}
	printf("%d", sum);
	return 0;
}