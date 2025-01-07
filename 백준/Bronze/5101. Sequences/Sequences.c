#include <stdio.h>

int main() {
    int a, b, c;
    while(1){
        scanf("%d %d %d",&a,&b,&c);
        if(a==0&&b==0&&c==0)
            break;
        if(b==0){
            if(a==c)
                printf("1\n");
            else
                printf("X\n");
        }
        else if((c-a)%b==0){
            if((c-a)*b<0)
                printf("X\n");
            else
                printf("%d\n",(c-a)/b+1);
        }
        else
            printf("X\n");
    }
    return 0;
}