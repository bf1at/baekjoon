#include <stdio.h>

int main() {

    int n, a;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&a);

        if(a%25<=16)

            printf("ONLINE\n");

        else

            printf("OFFLINE\n");

    }

    return 0;

}