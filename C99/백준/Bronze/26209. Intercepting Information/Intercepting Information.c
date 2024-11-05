#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
	int a[8];
	int flag = 0;
	for (int i = 0; i < 8; i++) {
		scanf("%d", &a[i]);
		if (a[i] != 0 && a[i] != 1)
			flag++;
	}
	if (flag != 0)
		printf("F");
	else
		printf("S");
	return 0;
}