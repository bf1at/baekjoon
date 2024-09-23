#include <stdio.h>

int main() {
    int n, s=2;
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        s+=s-1;
    }
    printf("%d", s*s);
    return 0;
}