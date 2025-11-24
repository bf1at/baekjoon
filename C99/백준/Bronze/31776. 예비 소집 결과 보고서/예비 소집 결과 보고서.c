#include <stdio.h>

int main() {

    int a,b,c, n,sum=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d %d %d",&a,&b,&c);

        if(a==-1)

            continue;

        else{

            if(b==-1){

                if(c==-1)

                    sum++;

                else

                    continue;

            }

            else if(b>=a){

                if(c==-1||c>=b)

                    sum++;

                else

                    continue;

            }

            else

                continue;

        }

    }

    printf("%d",sum);

    return 0;

}