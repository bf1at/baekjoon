#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	char s[128];
	char p[300] = "";
	char temp[3];
	fgets(s, 128, stdin);
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			int num = s[i] - 'a' + 1;
			sprintf(temp, "%02d", num);
			strcat(p, temp);
		}
		else if (s[i] >= 'A' && s[i] <= 'Z') {
			int num = s[i] - 'A' + 27;
			sprintf(temp, "%02d", num);
			strcat(p, temp);
		}
		else if (s[i] >= '0' && s[i] <= '9') {
			char t[3] = { '#', s[i], '\0' };
			strcat(p, t);
		}
		else {
			char t[2] = { s[i], '\0' };
			strcat(p, t);
		}
	}
	printf("%s", p);
	return 0;
}