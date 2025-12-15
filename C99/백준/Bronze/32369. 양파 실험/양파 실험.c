#include <stdio.h>

int main() {

    int n,a,b,as=1,bs=1, temp;

    scanf("%d %d %d",&n,&a,&b);

    for(int i=0;i<n;i++){

        as+=a;

        bs+=b;

        if(as<bs){

            temp=as;

            as=bs;

            bs=temp;

        }

        else if(as==bs)

            bs--;

    }

    printf("%d %d",as,bs);

    return 0;

}