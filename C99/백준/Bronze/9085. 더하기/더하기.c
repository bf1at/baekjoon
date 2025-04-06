#include <stdio.h>

int main() {

    int t, n, a;

    scanf("%d",&t);

    while(t--){

        int sum=0;

        scanf("%d",&n);

        while(n--){

            scanf("%d",&a);

            sum+=a;

        }

        printf("%d\n",sum);

    }

    return 0;

}