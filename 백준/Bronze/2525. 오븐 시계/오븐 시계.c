#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int m, s, p, m1, s1;
    scanf("%d %d", &m, &s);
    scanf("%d", &p);
    m1=m+p/60;
    s1=s+p%60;
    if(s1>=60){
        s1-=60;
        m1+=1;
    }
    if(m1>=24)
        m1-=24;
    printf("%d %d", m1, s1);
    return 0;
}