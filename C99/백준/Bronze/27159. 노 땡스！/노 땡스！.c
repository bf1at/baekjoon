#include <stdio.h>

int main() {

    int n,sum=0,a,b;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&a);

        if(i==0)

            sum+=a;

        else if(a-1!=b)

            sum+=a;

        b=a;

    }

    printf("%d",sum);

    return 0;

}