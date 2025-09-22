#include <stdio.h>

int main() {

    int n, a[100], odd=0, even=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&a[i]);

        if(a[i]%2==0)

            even++;

        else

            odd++;

    }

    if(n/2+n%2==odd)

        printf("1");

    else

        printf("0");

        

    return 0;

}