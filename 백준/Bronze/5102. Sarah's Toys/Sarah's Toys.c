#include <stdio.h>

int main() {
    int a,b,c;
    while(1){
        scanf("%d %d\n",&a,&b);
        if(a==0&&b==0)
            break;
        c=a-b;
        if(c%2==0)
            printf("%d %d\n",c/2,0);
        else{
            if(c==1)
                printf("0 0\n");
            else
                printf("%d %d\n",c/2-1,1);
        }
    }
    return 0;
}