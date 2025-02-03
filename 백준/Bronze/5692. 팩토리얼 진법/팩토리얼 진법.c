#include <stdio.h>

int fact(int n){
    if(n>1)
        return n*fact(n-1);
    else
        return 1;
}

int main() {
    int n, f, sum;
    while(1){
        scanf("%d",&n);
        if(n==0)
            break;
        f=1;
        sum=0;
        while(n!=0){
            sum+=n%10*fact(f);
            f++;
            n/=10;
        }
        printf("%d\n",sum);
    }
    return 0;
}