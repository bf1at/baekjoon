#include <stdio.h>

#include <string.h>

int main() {

    char s[1000002];

    int sum=0;

    fgets(s,1000002,stdin);

    for(int i=0;i<strlen(s)-1;i++){

        if(i==0){

            if(s[i]!=' ')

                sum++;

        }

        else{

            if(s[i]!=' '){

                if(s[i-1]==' ')

                    sum++;

            }

        }

    }

    printf("%d",sum);

    return 0;

}