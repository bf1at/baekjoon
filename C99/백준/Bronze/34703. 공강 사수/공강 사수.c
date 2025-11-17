#include <stdio.h>

int main() {

    int s[6]={0}, n, a;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&a);

        s[a]++;

    }

    for(int i=1;i<6;i++){

        if(s[i]==0){

            printf("YES");

            return 0;

        }

    }

    printf("NO");

    return 0;

}