#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
	char shortF[100];
	char trans[100];
}TXTMSG;

int main() {
	TXTMSG tm[12] = {
		{"CU", "see you"}, {":-)", "I’m happy"},
		{":-(", "I’m unhappy"},{";-)", "wink"},
		{":-P", "stick out my tongue"},
		{"(~.~)", "sleepy"},{"TA", "totally awesome"},
		{"CCC", "Canadian Computing Competition"},
		{"CUZ", "because"},{"TY", "thank-you"},
		{"YW", "you're welcome"},{"TTYL", "talk to you later"}
	};

	while (1) {
		char msg[1000000];
		scanf("%s", msg);
		if (strcmp(tm[11].shortF, msg) == 0) {
			printf("talk to you later");
			break;
		}
		int count = 0;
		for (int i = 0; i < 11; i++) {
			if (strcmp(tm[i].shortF, msg) == 0) {
				printf("%s\n", tm[i].trans);
				count++;
				break;
			}
		}
		if(count == 0)
			printf("%s\n", msg);
	}
	
	return 0;
}