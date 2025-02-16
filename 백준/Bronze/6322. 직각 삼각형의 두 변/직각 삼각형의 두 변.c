#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c,d,count=1;
    double e;
    while(1){
        scanf("%d %d %d",&a,&b,&c);
        if(a==0&&b==0&&c==0)
            break;
        printf("Triangle #%d\n",count);
        count++;
        if(a==-1){
            if(b>=c){
                printf("Impossible.\n\n");
                continue;
            }
            d=c*c-b*b;
            e=sqrt(d);
            printf("a = %.3lf\n\n",e);
        }
        else if(b==-1){
            if(a>=c){
                printf("Impossible.\n\n");
                continue;
            }
            d=c*c-a*a;
            e=sqrt(d);
            printf("b = %.3lf\n\n",e);
        }
        else if(c==-1){
            d=a*a+b*b;
            e=sqrt(d);
            printf("c = %.3lf\n\n",e);
        }
    }
    return 0;
}