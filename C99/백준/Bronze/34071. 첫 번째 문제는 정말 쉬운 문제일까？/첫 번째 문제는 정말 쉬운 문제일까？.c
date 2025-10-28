#include <stdio.h>

int main() {

    int n,a,max,min,b;

    scanf("%d %d",&n,&a);

    max=a;min=a;

    for(int i=0;i<n-1;i++){

        scanf("%d",&b);

        if(b>max)

            max=b;

        if(b<min)

            min=b;

    }

    if(a==min)

        printf("ez");

    else if(a==max)

        printf("hard");

    else

        printf("?");

    return 0;

}