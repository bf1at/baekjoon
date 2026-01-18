#include <stdio.h>

int main() {

    int n,a,sum=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&a);

        if(a==1)

            sum++;

        else

        for(int j=2;j<a;j++){

            if(a%j==0){

                sum++;

                break;

            }

        }

    }

    printf("%d",n-sum);

    return 0;

}