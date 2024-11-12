#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if (n==0)
        printf("1");
    else if (n==1)
        printf("0");
    else{
        if(n%2==1)
            printf("4");
        for(int i=0;i<n/2; i++)
            printf("8");
            }
    return 0;
}