#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char s[10000];
	int n, wl=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		char w[10000];
		scanf("%s", &w);
		if (i == 0)
			s[i] = w[0];
		else if (wl > strlen(w))
			s[i] = ' ';
		else
			s[i] = w[wl-1];
		wl = strlen(w);
	}
	s[n] = '\0';
	printf("%s", s);
	return 0;
}