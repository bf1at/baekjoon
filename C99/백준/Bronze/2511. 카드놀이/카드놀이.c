#include <stdio.h>

int main() {

    int a[10],b[10],lw=0,asum=0,bsum=0;

    for(int i=0;i<10;i++){

        scanf("%d",&a[i]);

    }

    for(int i=0;i<10;i++){

        scanf("%d",&b[i]);

    }

    for(int i=0;i<10;i++){

        

            if(a[i]>b[i]){

                asum+=3;

                lw='a';

            }

            else if(a[i]<b[i]){

                bsum+=3;

                lw='b';

            }

            else{

                asum+=1;

                bsum+=1;

            }

        

        

    }

        printf("%d %d\n",asum,bsum);

        if(asum>bsum)

            printf("A");

        else if(asum<bsum)

            printf("B");

        else{

            if(lw=='a')

                printf("A");

            else if(lw=='b')

                printf("B");

            else

                printf("D");

        

    }

    return 0;

}