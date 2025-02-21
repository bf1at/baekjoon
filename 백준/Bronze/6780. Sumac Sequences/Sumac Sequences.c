#include <stdio.h>

int main() {
    int a,b,c,l=2;
    scanf("%d %d",&a,&b);
    while(1){
        if(b>a)
            break;
        c=a-b;
        a=b;
        b=c;
        l++;
    }
    printf("%d",l);
    return 0;
}