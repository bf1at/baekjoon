#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x, a, b, sum=1, i=1;
    scanf("%d",&x);
    for(i=1; sum<x; i++){
        sum+=i;
    }
    if(x<sum){
        i--;
    }
    if(i%2==1){
        a=i;
        b=1;
    }
    else{
        a=1;
        b=i;
    }
    if(x!=sum){
    if(a>b){
        for(int j=0; j<x-(sum-i); j++){
            a--;
            b++;
        }
    }
    else {
        for(int j=0; j<x-(sum-i); j++){
            a++;
            b--;
        }
    }
    }
    printf("%d/%d",a,b);
    
    return 0;
}