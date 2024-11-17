#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int gan[6], sau[7], n, battle = 1;
	scanf("%d", &n);
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < 6; i++) {
			scanf("%d", &gan[i]);
		}
		for (int i = 0; i < 7; i++) {
			scanf("%d", &sau[i]);
		}
		int ganscore = gan[0] * 1 + gan[1] * 2
			+ gan[2] * 3 + gan[3] * 3 + gan[4] * 4 + gan[5] * 10;
		int sauscore = sau[0] * 1 + sau[1] * 2 + sau[2] * 2
			+ sau[3] * 2 + sau[4] * 3 + sau[5] * 5 + sau[6] * 10;
		if (ganscore > sauscore)
			printf("Battle %d: Good triumphs over Evil\n", battle++);
		else if (ganscore == sauscore)
			printf("Battle %d: No victor on this battle field\n", battle++);
		else
			printf("Battle %d: Evil eradicates all trace of Good\n", battle++);
	}
	return 0;
}