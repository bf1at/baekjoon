#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	char s[200];
	int n;
	scanf("%d %s", &n, s);
	char rn[12][10] = {
		"I", "II", "III", "IV", "V", "VI", 
		"VII", "VIII","IX","X","XI","XII"
	};
	for (int i = 0; i < 12; i++) {
		if (strstr(s, rn[i]))
			printf("%d ", i + 1);
	}

	return 0;
}