#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int pyr(int a) {
	if (a == 0)
		return 0;
	else
		return (a + pyr(a - 1));
}


int main() {
	int a;
	while (1) {
		scanf("%d", &a);
		if (a == 0)
			break;
		printf("%d\n", pyr(a));
	}
	return 0;
}