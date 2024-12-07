#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	time_t now = time(NULL);
	struct tm *tp = localtime(&now);
	printf("%d-%02d-%02d", tp->tm_year + 1900, tp->tm_mon + 1, tp->tm_mday);
	return 0;
}