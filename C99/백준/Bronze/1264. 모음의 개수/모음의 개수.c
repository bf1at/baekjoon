#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void remove_newline(char* s) {
	size_t len = strlen(s);
	if (len > 0 && s[len - 1] == '\n') {
		s[len - 1] = '\0';
	}
}

int main() {
	char s[257];
	while (1) {
		int count = 0;
		fgets(s, 257, stdin); 
		remove_newline(s);
		if (strcmp(s, "#") == 0)
			break;
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i'
				|| s[i] == 'o' || s[i] == 'u' ||
				s[i] == 'A' || s[i] == 'E' || s[i] == 'I'
				|| s[i] == 'O' || s[i] == 'U')
				count++;
		}
		printf("%d\n", count);
	}
	return 0;
} 