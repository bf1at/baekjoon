#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int n, c, c1=0, c0=0;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &c);
		if (c == 1)
			c1++;
		else
			c0++;
	}
	if (c1 >= c0)
		printf("%d", c0);
	else
		printf("%d", c1);

	return 0;
}