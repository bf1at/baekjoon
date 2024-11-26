#include <stdio.h>

int main() {
    char s[1001];
    int a;
    scanf("%s",s);
    scanf("%d",&a);
    printf("%c",s[a-1]);
    return 0;
}