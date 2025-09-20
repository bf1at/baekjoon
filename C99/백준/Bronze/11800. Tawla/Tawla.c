#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char* dice[10] = { "Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh" };
	int n, a, b, count = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		printf("Case %d: ", count);
		if ((a == 6 && b == 5) || (a == 5 && b == 6))
			printf("Sheesh Beesh");
		else if (a == b) {
			if (a == 1)
				printf("Habb Yakk");
			else if (a == 2)
				printf("Dobara");
			else if (a == 3)
				printf("Dousa");
			else if (a == 4)
				printf("Dorgy");
			else if (a == 5)
				printf("Dabash");
			else
				printf("Dosh");
		}
		else if (a > b)
			printf("%s %s", dice[a - 1], dice[b - 1]);
		else
			printf("%s %s", dice[b - 1], dice[a - 1]);
		count++;
		printf("\n");
	}

	return 0;
}