#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main() {

    int n, count=0;

    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        char s[12];

        sprintf(s,"%d",i);

        int l=strlen(s), sum=0;

        for(int j=0;j<l;j++){

            sum+=s[j]-'0';

        }

        if(i%sum==0)

            count++;

    }

    printf("%d",count);

    return 0;

}