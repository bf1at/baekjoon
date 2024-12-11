#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char c;
	scanf("%c", &c);
	if (c == 'M')
		printf("MatKor");
	else if (c == 'W')
		printf("WiCys");
	else if (c == 'C')
		printf("CyKor");
	else if (c == 'A')
		printf("AlKor");
	else if (c == '$')
		printf("$clear");
	return 0;
}