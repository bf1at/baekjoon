#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char sub[51], gp[3];
	double gc, gcsum = 0, sum = 0, gpd;
	for (int i = 0; i < 20; i++) {
		scanf("%s %lf %s", sub, &gc, gp);
		getchar();
		if (strcmp(gp, "P") == 0)
			continue;
		else {
			if (strcmp(gp, "A+") == 0)
				gpd = 4.5;
			else if (strcmp(gp, "A0") == 0)
				gpd = 4.0;
			else if (strcmp(gp, "B+") == 0)
				gpd = 3.5;
			else if (strcmp(gp, "B0") == 0)
				gpd = 3.0;
			else if (strcmp(gp, "C+") == 0)
				gpd = 2.5;
			else if (strcmp(gp, "C0") == 0)
				gpd = 2.0;
			else if (strcmp(gp, "D+") == 0)
				gpd = 1.5;
			else if (strcmp(gp, "D0") == 0)
				gpd = 1.0;
			else if (strcmp(gp, "F") == 0)
				gpd = 0.0;
			gcsum += gc;
			sum += gc * gpd;
		}
	}
	printf("%lf", sum / gcsum);

	return 0;
}