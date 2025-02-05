#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int n, c, mary, john;
	while (1) {
		scanf("%d", &n);
		if (n == 0)
			break;
		mary = 0;
		john = 0;
		while (n--) {
			scanf("%d", &c);
			if (c == 0)
				mary++;
			else
				john++;
		}
		printf("Mary won %d times and John won %d times\n", mary, john);
	}
	return 0;
}