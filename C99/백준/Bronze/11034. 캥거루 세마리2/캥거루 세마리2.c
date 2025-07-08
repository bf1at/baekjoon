#include <stdio.h>

int main() {

    int a,b,c;

    while(scanf("%d %d %d",&a,&b,&c)!=EOF){

    if(b-a>c-b)

        printf("%d\n",b-a-1);

    else

        printf("%d\n",c-b-1);

    }

    return 0;

}