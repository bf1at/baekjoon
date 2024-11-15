#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf(" @@@   @@@ \n");
		printf("@   @ @   @\n");
		printf("@    @    @\n");
		printf("@         @\n");
		printf(" @       @ \n");
		printf("  @     @  \n");
		printf("   @   @   \n");
		printf("    @ @    \n");
		printf("     @     \n");
	}
	return 0;
}