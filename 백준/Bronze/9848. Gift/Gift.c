#include <stdio.h>

int main() {

    int n, k;

    int present, before=-200000, sum=0;

    scanf("%d %d",&n,&k);

    while(n--){

        scanf("%d",&present);

        if(before-present>=k)

            sum++;

        before=present;

        

    }

    printf("%d",sum);

    return 0;

}