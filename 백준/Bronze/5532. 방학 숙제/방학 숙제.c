#include <stdio.h>

int main() {

    int l,m,k,mm,kk,longer;

    scanf("%d %d %d %d %d",&l,&m,

        &k,&mm,&kk);

    if(m%mm==0)

        m/=mm;

    else{

        m/=mm;

        m++;

    }

    if(k%kk==0)

        k/=kk;

    else{

        k/=kk;

        k++;

    }

    if(m>k)

        longer=m;

    else

        longer=k;

    printf("%d",l-longer);

    return 0;

}