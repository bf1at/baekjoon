#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int n, year, month, day;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d %d", &year, &month, &day);
		if (year > 1989)
			printf("No\n");
		else if (year == 1989) {
			if (month > 2)
				printf("No\n");
			else if (month == 2) {
				if (day > 27)
					printf("No\n");
				else
					printf("Yes\n");
			}
			else
				printf("Yes\n");
		}
		else
			printf("Yes\n");
	}
	return 0;
}