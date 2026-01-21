#include <stdio.h>

int main() {

    int n, b, c[100],max=0,a;

    scanf("%d %d",&n,&b);

    for(int i=0;i<n;i++){

        scanf("%d",&c[i]);

    }

    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            for(int k=j+1;k<n;k++){

                a=c[i]+c[j]+c[k];

                if(a<=b&&a>max)

                    max=a;

            }

        }

    }

    printf("%d",max);

    return 0;

}