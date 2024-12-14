#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n, sum = 0;
	scanf("%d", &n);
	while (n--) {
		int k;
		scanf("%d", &k);
		sum += k;
	}
	if (sum < 0)
		printf("Left");
	else if (sum == 0)
		printf("Stay");
	else
		printf("Right");
	return 0;
}