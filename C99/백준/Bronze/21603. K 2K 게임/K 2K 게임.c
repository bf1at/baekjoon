#include <stdio.h>

int main() {

    int n,k,i=0,s[100000];

    scanf("%d %d",&n,&k);

    int fk=k%10;

    int f2k=2*k%10;

    for(int j=1;j<=n;j++){

        if(j%10==fk||j%10==f2k)

            continue;

        s[i]=j;

        i++;

    }

    printf("%d\n",i);

    for(int j=0;j<i;j++){

        printf("%d ",s[j]);

    }

    return 0;

}