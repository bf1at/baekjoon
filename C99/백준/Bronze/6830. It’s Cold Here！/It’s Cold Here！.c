#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	char area[1000], s[1000];
	int min = 300, n;
	while (scanf("%s %d", s, &n)) {
		if (n < min) {
			min = n;
			strcpy(area, s);
		}
		if (strcmp("Waterloo", s) == 0)
			break;
	}
	printf("%s", area);
	return 0;
}