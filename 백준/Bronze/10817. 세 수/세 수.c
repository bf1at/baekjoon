#include <stdio.h>

int main() {

    int a[3];

    int temp;

    scanf("%d %d %d",&a[0],&a[1],&a[2]);

    for(int i=0;i<2;i++){

        if(a[i]>a[i+1]){

            temp=a[i];

            a[i]=a[i+1];

            a[i+1]=temp;

        }

    }

    if(a[0]>a[1]){

            temp=a[0];

            a[0]=a[1];

            a[1]=temp;

        }

    printf("%d",a[1]);

    return 0;

}