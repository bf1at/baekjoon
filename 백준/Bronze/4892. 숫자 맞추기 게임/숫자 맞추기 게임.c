#include <stdio.h>

int main() {
    int n0,n1,n2,n3,n4;
    for(int i=1;1;i++){
        scanf("%d",&n0);
        if(n0==0)
            break;
        n1=3*n0;
        if(n1%2==0){
            printf("%d. even ",i);
            n2=n1/2;
        }
        else{
            printf("%d. odd ",i);
            n2=(n1+1)/2;
        }
        n3=3*n2;
        n4=n3/9;
        printf("%d\n",n4);
    }
    return 0;
}