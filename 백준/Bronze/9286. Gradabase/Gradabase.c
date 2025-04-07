#include <stdio.h>

int main() {

    int t,n,a,s[500];

    scanf("%d",&t);

    for(int i=1;i<=t;i++){

        scanf("%d",&n);

        int sn=0;

        for(int j=0;j<n;j++){

            scanf("%d",&a);

            if(a>=0&&a<6){

                s[sn]=a+1;

                sn++;

            }

        }

        printf("Case %d:\n",i);

        for(int j=0;j<sn;j++)

            printf("%d\n",s[j]);

    }

    return 0;

}