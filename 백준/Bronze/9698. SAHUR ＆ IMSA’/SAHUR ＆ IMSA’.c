#include <stdio.h>

int main() {

    int h,m,t;

    scanf("%d",&t);

    for(int i=1;i<=t;i++){

        scanf("%d %d",&h,&m);

        if(m<45){

            if(h<1)

                h=23;

            else

                h--;

            m+=60;

        }

        m-=45;

        printf("Case #%d: %d %d\n",i,h,m);

    }

    return 0;

}