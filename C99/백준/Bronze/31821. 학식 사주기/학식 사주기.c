#include <stdio.h>

int main() {

    int n,a[10];

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&a[i]);

    }

    int sum=0, m;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&m);

        sum+=a[m-1];

    }

    printf("%d",sum);

    return 0;

}