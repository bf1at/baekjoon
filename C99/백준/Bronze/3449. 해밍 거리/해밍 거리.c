#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
	char a[101], b[101];
	int n, h=0;
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		scanf("%s %s", a, b);
		for (int j = 0; j < strlen(a); j++) {
			if (a[j] != b[j])
				h++;
		}
		printf("Hamming distance is %d.\n", h);
		memset(a, '\0',sizeof(a));
		memset(b, '\0',sizeof(b));
		h = 0;
	}
	return 0;
}