#include <stdio.h>

int main() {

    int n, a, b=1, c=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&a);

        if(a==b)

            b++;

        else

            c++;

    }

    printf("%d",c);

    return 0;

}