#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t, h, w, n, room;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);
        if (n%h==0)
            room = h * 100 + (n / h);
        else
    		room = (n % h) * 100 + (n / h) + 1;
		printf("%d\n", room);
	}
	return 0;
}