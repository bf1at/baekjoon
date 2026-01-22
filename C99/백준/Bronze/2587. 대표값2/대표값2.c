#include <stdio.h>

int main() {

    int n[5],temp,sum=0;

    for(int i=0;i<5;i++){

        scanf("%d",&n[i]);

        sum+=n[i];

    }

    for(int j=0;j<4;j++){

    for(int i=0;i<4-j;i++){

        if(n[i]>n[i+1]){

            temp=n[i];

            n[i]=n[i+1];

            n[i+1]=temp;

        }

    }

    }

    printf("%d\n%d",sum/5,n[2]);

    return 0;

}