#include <stdio.h>

int main() {

    int n, p[101]={0},sum=0,a;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&a);

        if(p[a]==0){

            p[a]++;

        }

        else

            sum++;

    }

    printf("%d",sum);

    return 0;

}