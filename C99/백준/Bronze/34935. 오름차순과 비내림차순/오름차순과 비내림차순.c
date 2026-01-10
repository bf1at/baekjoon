#include <stdio.h>

#include <string.h>

int main() {

    int n, a, b, flag=1;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&a);

        if(i!=0){

            if(a==b)

                flag=0;

        }

        b=a;

    }

    printf("%d",flag);

    return 0;

}