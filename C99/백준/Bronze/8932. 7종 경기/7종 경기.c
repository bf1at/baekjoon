#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	double athletic[7];
	double a, b, c;
	int n;
	scanf("%d", &n);
	while (n--) {
		int sum = 0;
		for (int i = 0; i < 7; i++) {
			scanf("%lf", &athletic[i]);

			if (i == 0) {
				a = 9.23076;
				b = 26.7;
				c = 1.835;
			}
			else if (i == 1) {
				a = 1.84523;
				b = 75;
				c = 1.348;
			}
			else if (i == 2) {
				a = 56.0211;
				b = 1.5;
				c = 1.05;
				//athletic[i] /= 100;
			}
			else if (i == 3) {
				a = 4.99087;
				b = 42.5;
				c = 1.81;
			}
			else if (i == 4) {
				a = 0.188807;
				b = 210;
				c = 1.41;
			}
			else if (i == 5) {
				a = 15.9803;
				b = 3.8;
				c = 1.04;
				//athletic[i] /= 100;
			}
			else if (i == 6) {
				a = 0.11193;
				b = 254;
				c = 1.88;
			}

			double semisum;
			if (i == 0 || i == 3 || i == 6)
				semisum = b - athletic[i];
			else
				semisum = athletic[i] - b;
			sum += floor(a * pow(semisum, c));

		}
		printf("%d\n", sum);
	}

	return 0;
}