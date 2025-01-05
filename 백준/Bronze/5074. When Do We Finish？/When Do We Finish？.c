#include <stdio.h>

int main() {
    int h1,m1,h2,m2,h3,m3;
    while(1){
        int days=0;
        scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
        if(h1==0&&h2==0&&m1==0&&m2==0)
            break;
        m3=m1+m2;
        if(m3>=60){
            h1++;
            m3-=60;
        }
        h3=h1+h2;
        while(h3>=24){
            h3-=24;
            days++;
        }
        if(days)
            printf("%02d:%02d +%d\n",h3,m3,days);
        else
            printf("%02d:%02d\n",h3,m3);
    }
    return 0;
}