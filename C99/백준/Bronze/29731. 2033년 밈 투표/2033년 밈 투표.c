#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n;
	int count = 0;
	char s[7][40] = {"Never gonna give you up",
	"Never gonna let you down",
	"Never gonna run around and desert you",
	"Never gonna make you cry",
	"Never gonna say goodbye",
	"Never gonna tell a lie and hurt you",
	"Never gonna stop"};
	scanf("%d", &n);
	getchar();
	for(int j=0; j<n; j++) {
		char s2[51];
		gets(s2);
		for (int i = 0; i < 7; i++) {
			if (strcmp(s2, s[i]) == 0) {
				count++;
				break;
			}
		}
	}
	if (count == n)
		printf("No");
	else
		printf("Yes");
	return 0;
}