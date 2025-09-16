#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, l, pre, sum, max = 0, many = 0;
	char s[1001];
	scanf("%d %d", &n, &l);
	for (int i = 0; i < n; i++) {
		scanf("%s", &s);
		sum = 0;
		for (int j = 0; j < l; j++) {
			if (j == 0 && s[j] == '1')
				sum++;
			if (j != 0 && pre != '1' && s[j] == '1')
				sum++;
			pre = s[j];
		}
		if (sum > max) {
			max = sum;
			many = 1;
		}
		else if (sum == max) {
			many++;
		}
	}
	printf("%d %d", max, many);

	return 0;
}