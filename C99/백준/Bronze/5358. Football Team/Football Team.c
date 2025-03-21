#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	while (1) {
		char s[30];
		if (!fgets(s, 30, stdin))
			break;
		for (int j = 0; j < strlen(s); j++) {
			if (s[j] == 'e' || s[j] == 'E')
				s[j] = s[j] + 4;
			else if (s[j] == 'i' || s[j] == 'I')
				s[j] = s[j] - 4;
		}
		printf("%s", s);
	}
}