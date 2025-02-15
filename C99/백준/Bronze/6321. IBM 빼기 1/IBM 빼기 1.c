#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int n, count=1;
	scanf("%d", &n);
	while (n--) {
		char s[51];
		scanf("%s", s);
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] == 'Z')
				s[i] = 'A';
			else
				s[i] += 1;
		}
		printf("String #%d\n%s\n\n", count, s);
		count++;
	}
	return 0;
}