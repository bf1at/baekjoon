#include <stdio.h>

int main() {

    int n, t, a[50],sum=0, i;

    scanf("%d %d",&n,&t);

    for(i=0;i<n;i++){

        scanf("%d",&a[i]);

        sum+=a[i];

        if(sum>t){

            break;

        }

    }

    printf("%d",i);

    return 0;

}