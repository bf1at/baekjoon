#include <stdio.h>

int main() {

    int n, x,y,lx,ly,rx,ry,flag=0;

    scanf("%d %d %d",&n,&x,&y);

    while(n--){

        scanf("%d %d %d %d",&lx,&ly,&rx,&ry);

        if(x>=lx&&x<=rx&&y>=ly&&y<=ry)

            flag++;

    }

    if(flag!=0)

        printf("Yes");

    else

        printf("No");

    return 0;

}