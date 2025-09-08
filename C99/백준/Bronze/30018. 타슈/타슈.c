#include <stdio.h>

int main() {

    int a[100], b[100], n, sum=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&a[i]);

    }

    for(int i=0;i<n;i++){

        scanf("%d",&b[i]);

        if(a[i]>=b[i])

            sum+=a[i]-b[i];

        else

            sum+=b[i]-a[i];

    }

    if(sum%2==1)

        sum++;

    printf("%d",sum/2);

    

    return 0;

}