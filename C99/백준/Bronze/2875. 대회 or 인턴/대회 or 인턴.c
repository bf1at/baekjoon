#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main() {
	int n, m, k, tc1, tc2, rem=0;
	scanf("%d %d %d", &n, &m, &k);
	if (n / 2 >= m)
		tc1 = m;
	else
		tc1 = n / 2;
	rem += n - 2 * tc1;
	rem += m - tc1;
	if (rem >= k)
		tc2 = tc1;
	else
		while (1) {
			tc1--;
			rem += 3;
			if (rem >= k) {
				tc2 = tc1;
				break;
			}
		}
	
	printf("%d", tc2);

	return 0;
}