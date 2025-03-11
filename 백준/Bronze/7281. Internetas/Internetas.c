#include <stdio.h>

int main() {

    int a, b=0, n, t, m, max=0;

    scanf("%d",&n);

    while(n--){

        scanf("%d %d",&t,&m);

        if(m==1){

            a=t;

            if(a-b>max)

                max=a-b;

            b=a;

        }

    }

    printf("%d",max);

    return 0;

}