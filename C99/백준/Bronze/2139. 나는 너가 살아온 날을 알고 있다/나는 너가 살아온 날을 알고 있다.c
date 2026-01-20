#include <stdio.h>

int main() {

    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    int d,m,y;

    while(1){

        int day=0;

        scanf("%d %d %d",&d,&m,&y);

        if(d==0&&m==0&&y==0)

            break;

        for(int i=1;i<m;i++){

            day+=month[i];

        }

        day+=d;

        if(m>2){

            if(y%4==0){

                if(y%100!=0||y%400==0){

                    day++;

                }

            }

        }

        printf("%d\n",day);

    }

    return 0;

}