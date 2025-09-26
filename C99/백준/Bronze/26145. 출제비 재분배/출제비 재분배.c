#include <stdio.h>

int main() {

    int n, m, op[2000]={0}, a;

    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++){

        scanf("%d",&a);

        op[i]+=a;

    }

    for(int i=0;i<n;i++){

        for(int j=0;j<n+m;j++){

            scanf("%d",&a);

            op[i]-=a;

            op[j]+=a;

        }

    }

    for(int i=0;i<n+m;i++)

        printf("%d ",op[i]);

    return 0;

}