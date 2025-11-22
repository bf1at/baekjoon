#include <stdio.h>

int main() {

    int n,k,a=1;

    scanf("%d %d",&n,&k);

    for(int i=0;i<n-1;i++){

        a*=2;

    }

    printf("%d",k/a);

    return 0;

}