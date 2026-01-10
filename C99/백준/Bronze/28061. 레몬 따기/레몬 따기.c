#include <stdio.h>

int main() {

    int n, l, max=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&l);

        if(l-(n-i)>max)

            max=l-(n-i);

    }

    printf("%d",max);

    return 0;

}