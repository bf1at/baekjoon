#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long long reverseNum(char* s) {
	char sn[12];
	for (int i = 0; i < strlen(s); i++) {
		sn[i] = s[strlen(s) - i - 1];
	}
	sn[strlen(s)] = '\0';
	return atoi(sn);
}

int main(){
	int n;
	scanf("%d", &n);
	while (n--) {
		char s1[12], s2[12], sums[12];
		scanf("%s %s", s1, s2);
		long long sn1, sn2;
		sn1 = reverseNum(s1);
		sn2 = reverseNum(s2);
		long long sum;
		sum = sn1 + sn2;
		sprintf(sums, "%lld", sum);
		long long revsum;
		revsum = reverseNum(sums);
		printf("%lld\n", revsum);
	}
	return 0;
}