#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	float spd;
	int wgt, str;
	while (1) {
		int W = 0, L = 0, Q = 0;
		scanf("%f %d %d", &spd, &wgt, &str);
		if (spd == 0 && wgt == 0 && str == 0)
			break;
		if (spd <= 4.5) {
			W++; L++; Q++;
		}
		else if (spd <= 5.0) {
			Q++; L++;
		}
		else if (spd <= 6.0) {
			L++;
		}
		if (wgt >= 300) {
			W++; L++; Q++;
		}
		else if (wgt >= 200) {
			W++; Q++;
		}
		else if (wgt >= 150) {
			W++;
		}
		if (str >= 500) {
			W++; L++; Q++;
		}
		else if (str >= 300) {
			W++; Q++;
		}
		else if (str >= 200) {
			W++;
		}
		if (W == 3)
			printf("Wide Receiver ");
		if (L == 3)
			printf("Lineman ");
		if (Q == 3)
			printf("Quarterback");
		if (Q != 3 && L != 3 && W != 3)
			printf("No positions");
		printf("\n");
	}
	
	return 0;
}