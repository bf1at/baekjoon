#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int z, n;
	char s[500001];
	scanf("%d", &z);
	while (z--) {
		int x = 0, y = 0;
		scanf("%d", &n);
		getchar();
		scanf("%s", s);
		for(int i=0;i<n;i++) {
			if (s[i] == 'N')
				y++;
			else if (s[i] == 'S')
				y--;
			else if (s[i] == 'W')
				x--;
			else
				x++;
		}
		if (x < 0)
			x = -x;
		if (y < 0)
			y = -y;
		printf("%d\n", x + y);
	}
	return 0;
}