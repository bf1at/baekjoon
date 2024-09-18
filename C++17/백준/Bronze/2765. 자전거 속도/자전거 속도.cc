#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main() {
	int s, i=1;
	float d, t;
	while (1) {
		scanf("%f %d %f", &d, &s, &t);
		if (s == 0)
			break;
		printf("Trip #%d: %.2f %.2f\n",i, d * 3.1415927 /63360*s, d * 3.1415927 /63360*s*3600/t);
		i++;
	}
	return 0;
}