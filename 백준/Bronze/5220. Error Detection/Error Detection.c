#include <stdio.h>

int main() {
    int k,a,b;
    scanf("%d",&k);
    while(k--){
        int sum=0;
        scanf("%d %d",&a,&b);
        while(a!=0){
            sum+=a%2;
            a/=2;
        }
        if((sum+b)%2==0)
            printf("Valid\n");
        else
            printf("Corrupt\n");
    }
    return 0;
}