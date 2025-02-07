#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	while (n--) {
		char c[1000];
		int mid;
		scanf("%s",c);
		mid = strlen(c)/2 - 1;
		if (c[mid] == c[mid + 1])
			printf("Do-it\n");
		else
			printf("Do-it-Not\n");
	}
	return 0;
}