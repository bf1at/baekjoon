#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int min = 0, sec = 0, time;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &time);
		min += time / 60;
		sec += time % 60;
		if (sec >= 60) {
			min++;
			sec -= 60;
		}
	}
	printf("%d\n%d", min, sec);

	return 0;
}