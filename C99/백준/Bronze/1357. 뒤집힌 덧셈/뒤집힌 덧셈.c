#include <stdio.h>

#include <string.h>

#include <stdlib.h>

int main() {

    char n1[10],n2[10],n3[10],temp;

    scanf("%s %s",n1,n2);

    int l1=strlen(n1), l2=strlen(n2);

    for(int i=0;i<l1/2;i++){

        int k=l1-i-1;

        temp=n1[i];

        n1[i]=n1[k];

        n1[k]=temp;

    }

    for(int i=0;i<l2/2;i++){

        int k=l2-i-1;

        temp=n2[i];

        n2[i]=n2[k];

        n2[k]=temp;

    }

    sprintf(n3,"%d",atoi(n1)+atoi(n2));

    int l3=strlen(n3);

    for(int i=0;i<l3/2;i++){

        int k=l3-i-1;

        temp=n3[i];

        n3[i]=n3[k];

        n3[k]=temp;

    }

    printf("%d",atoi(n3));

    return 0;

}