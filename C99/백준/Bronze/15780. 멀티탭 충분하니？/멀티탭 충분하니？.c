#include <stdio.h>

int main() {

    int n,k,a,sum=0;

    scanf("%d %d",&n,&k);

    for(int i=0;i<k;i++){

        scanf("%d",&a);

        sum+=(a+1)/2;

    }

    if(n<=sum)

        printf("YES");

    else

        printf("NO");

    return 0;

}