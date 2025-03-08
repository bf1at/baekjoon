#include <stdio.h>

int main() {

    double f;

    while(1){

        scanf("%lf",&f);

        if(f==0)

            break;

        double sum=0;

        sum+=1;

        sum+=f;

        sum+=f*f;

        sum+=f*f*f;

        sum+=f*f*f*f;

        printf("%.2lf\n",sum);

    }

    return 0;

}