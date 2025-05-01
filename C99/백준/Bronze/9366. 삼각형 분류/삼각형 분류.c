#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int t, s[3];
	scanf("%d", &t);
	for(int i=1; i<=t; i++) {
		int max = 0, sum=0;
		for (int j = 0; j < 3; j++) {
			scanf("%d", &s[j]);
			if (s[j] > max)
				max = s[j];
			sum += s[j];
		}
		printf("Case #%d: ", i);
		if (max >= sum - max)
			printf("invalid!\n");
		else if (s[0] == s[1] && s[1] == s[2])
			printf("equilateral\n");
		else if (s[0] == s[1] || s[1] == s[2] || s[2] == s[0])
			printf("isosceles\n");
		else
			printf("scalene\n");
	}
	
	return 0;
}