#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int n1[3], n2[3];
	char s1[4];
	int temp;
	scanf("%d %d %d", &n1[0], &n1[1], &n1[2]);
	scanf("%s", s1);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3-i-1; j++) {
			if (n1[j] > n1[j + 1]) {
				temp = n1[j];
				n1[j] = n1[j + 1];
				n1[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		if (s1[i] == 'A')
			n2[i] = n1[0];
	}
	for (int i = 0; i < 3; i++) {
		if (s1[i] == 'B')
			n2[i] = n1[1];
	}
	for (int i = 0; i < 3; i++) {
		if (s1[i] == 'C')
			n2[i] = n1[2];
	}
	printf("%d %d %d", n2[0], n2[1], n2[2]);
}