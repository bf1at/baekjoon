#include <stdio.h>

int main() {

    int n, sum=0, a;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&a);

        sum+=a;

    }

    if(sum>n/2)

        printf("Junhee is cute!");

    else

        printf("Junhee is not cute!");

    return 0;

}