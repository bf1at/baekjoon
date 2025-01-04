#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int a, b, c;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;
		if (a > b && a > c) {
			if (a >= b + c) {
				printf("Invalid\n");
				continue;
			}
		}
		else if (b > a && b > c) {
			if (b >= a + c) {
				printf("Invalid\n");
				continue;
			}
		}
		else if (c > a && c > b) {
			if (c >= a + b) {
				printf("Invalid\n");
				continue;
			}
		}
			
		if (a == b && b == c)
			printf("Equilateral\n");
		else if (a == b || b == c || c == a)
			printf("Isosceles\n");
		else
			printf("Scalene\n");
	}
	return 0;
}