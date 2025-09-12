#include <stdio.h>

int main() {

    int s1,s2,s3,s4,s5 ,a=0,b=0;

    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);

    a+=s1*6+s2*3+s3*2+s4+s5*2;

    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);

    b+=s1*6+s2*3+s3*2+s4+s5*2;

    printf("%d %d",a,b);

    return 0;

}