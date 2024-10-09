#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main() {
	int h1,h2,m1,m2,s1,s2,h3,m3,s3;
	scanf("%d:%d:%d", &h1, &m1, &s1);
	scanf("%d:%d:%d", &h2, &m2, &s2);
	if (h1 == h2 && m1 == m2 && s1 == s2) {
		printf("24:00:00\n");
		return 0;
	}
	if (s2 >= s1)
		s3 = s2 - s1;
	else {
		s3 = s2 - s1 + 60;
		m2--;
	}
	if (m2 >= m1)
		m3 = m2 - m1;
	else {
		m3 = m2 - m1 + 60;
		h2--;
	}
	if (h2 >= h1)
		h3 = h2 - h1;
	else
		h3 = h2 - h1 + 24;

	printf("%02d:%02d:%02d", h3, m3, s3);
	
	return 0;
}