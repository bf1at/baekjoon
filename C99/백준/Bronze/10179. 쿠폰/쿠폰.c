#include <stdio.h>

int main() {

    double p;

    int t;

    scanf("%d",&t);

    while(t--){

        scanf("%lf",&p);

        printf("$%.2lf\n",p-p/5);

    }

    return 0;

}