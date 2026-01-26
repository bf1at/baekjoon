#include <stdio.h>

#include <string.h>

int main() {

    char s[101], n[101]="";

    scanf("%s",s);

    int l=strlen(s), ni=0;

    for(int i=0;i<l;i++){

        if(i==0)

            n[ni++]=s[0];

        else{

            if(s[i]=='-'){

                n[ni++]=s[++i];

            }

        }

    }

    n[ni]='\n';

    printf("%s",n);

    return 0;

}