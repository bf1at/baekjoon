#include <stdio.h>

int main() {

    int n, name[300]={0}, ai=0;

    char s[31], a[50];

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf(" %s",s);

        name[s[0]]++;

    }

    for(int i='a';i<='z';i++){

        if(name[i]>=5){

            a[ai]=i;

            ai++;

        }

    }

    a[ai]='\n';

    if(ai==0)

        printf("PREDAJA");

    else

        printf("%s",a);

    return 0;

}