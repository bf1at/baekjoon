#include <stdio.h>

int main() {

    int a, n, max=0, min=1000;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&a);

        if(a>max)

            max=a;

        if(a<min)

            min=a;

    }

    printf("%d",max-min);

    return 0;

}