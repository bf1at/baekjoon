#include <stdio.h>

int main() {

    int t,n,u,v;

    scanf("%d",&t);

    for(int i=0;i<t;i++){

        scanf("%d",&n);
        
        scanf("%d %d",&u,&v);

        for(int j=0;j<n;j++)

            scanf("%d %d",&u,&v);

        printf("Material Management %d\n",i+1);

        printf("Classification ---- End!\n");

    }

    return 0;

}