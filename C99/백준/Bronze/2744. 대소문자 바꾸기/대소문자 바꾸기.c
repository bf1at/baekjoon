#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

int main(void) {
	char arr[100] = "";
	gets(arr);
	for (int i = 0; i < 100; i++) {
		if (arr[i] == '\0')
			break;
		if (islower(arr[i]))
			arr[i] = toupper(arr[i]);
		else if (isupper(arr[i]))
			arr[i] = tolower(arr[i]);
	}
	printf("%s", arr);
	return 0;
}