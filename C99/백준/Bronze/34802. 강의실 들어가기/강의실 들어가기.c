#include <stdio.h>

int main() {

    int y1,m1,s1,y2,m2,s2,t,k,tt=0;

    int kk;

    scanf("%d:%d:%d",&y1,&m1,&s1);

    scanf("%d:%d:%d",&y2,&m2,&s2);

    scanf("%d %d",&t,&k);

    tt+=(y2-y1)*3600;

    tt+=(m2-m1)*60;

    tt+=s2-s1;

    if(tt<0)

        printf("0");

    else{

        if(tt-t*(100-k)/100>=0)

            printf("1");

        else

            printf("0");

    }

    return 0;

}