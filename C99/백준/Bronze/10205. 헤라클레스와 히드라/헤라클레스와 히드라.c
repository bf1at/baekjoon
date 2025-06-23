#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int k, h;
	char s[101];
	scanf("%d", &k);
	for(int j=0; j<k; j++) {
		scanf("%d", &h);
		getchar();
		scanf("%s", s);
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] == 'c')
				h++;
			else
				h--;
			if (h == 0)
				break;
		}
		printf("Data Set %d:\n%d\n\n", j + 1, h);
	}
	return 0;
} 