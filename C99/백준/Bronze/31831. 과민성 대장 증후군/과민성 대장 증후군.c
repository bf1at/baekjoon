#include <stdio.h>

int main() {

    int n, m, a, sum=0, s=0;

    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++){

        scanf("%d",&a);

        s+=a;

        if(s>=m)

            sum++;

        if(s<0)

            s=0;

    }

    printf("%d",sum);

    return 0;

}