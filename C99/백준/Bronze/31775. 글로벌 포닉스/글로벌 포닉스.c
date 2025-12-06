#include <stdio.h>

int main() {

    int lkp[3]={0};

    char s[21];

    for(int i=0;i<3;i++){

        scanf("%s",s);

        if(s[0]=='l')

            lkp[0]++;

        else if(s[0]=='k')

            lkp[1]++;

        else if(s[0]=='p')

            lkp[2]++;

    }

    for(int i=0;i<3;i++){

        if(lkp[i]==0){

            printf("PONIX");

            return 0;

        }

    }

    printf("GLOBAL");

    return 0;

}