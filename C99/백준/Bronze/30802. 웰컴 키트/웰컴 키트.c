#include <stdio.h>

int main() {

    int n, x[6], t,p,tsum=0,psum=0;

    scanf("%d",&n);

    for(int i=0;i<6;i++)

        scanf("%d",&x[i]);

    scanf("%d %d",&t,&p);

    for(int i=0;i<6;i++){

        if(x[i]%t>0)

            tsum+=x[i]/t+1;

        else

            tsum+=x[i]/t;

    }

    printf("%d\n%d %d",tsum,n/p,n%p);

    return 0;

}