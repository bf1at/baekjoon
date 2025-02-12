#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int k, e, a, data = 1;
	scanf("%d", &k);
	while (k--) {
		scanf("%d %d", &e, &a);
		printf("Data Set %d:\n", data);
		if (e <= a)
			printf("no drought\n\n");
		else if (e / a <= 5)
			printf("drought\n\n");
		else {
			double ee = e / a;
			while (ee > 5) {
				ee/=5;
				printf("mega ");
			}
			printf("drought\n\n");
		}
		data++;
	}
	return 0;
}