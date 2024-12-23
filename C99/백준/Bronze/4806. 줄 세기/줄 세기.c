#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
#include <stdio.h>

    char s[101];
    int count = 0;
    while (gets(s) != NULL) {
        count++;
    }
    printf("%d", count);
	return 0;
}