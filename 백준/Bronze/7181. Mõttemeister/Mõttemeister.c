#include <stdio.h>

int main() {

    int n;

    char a[10],b[10];

    scanf("%s %d",a,&n);

    while(n--){

        int c=0, d=0, f=0;

        scanf("%s",b);

        for(int i=0;i<4;i++){

            for(int j=0;j<4;j++){

                if(b[i]==a[j]){

                    c++;

                    break;

                }

            }

        }

        for(int i=0;i<4;i++){

            if(a[i]==b[i])

                d++;

        }

        printf("%d %d\n",c,d);

    }

    return 0;

}