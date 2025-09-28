#include <stdio.h>

int main() {

    int n, k=2;

    scanf("%d",&n);

    for(int i=0;i<n-1;i++)

        k*=2;

    printf("%d",k);

    return 0;

}