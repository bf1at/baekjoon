#include <stdio.h>

#include <string.h>

int main() {

    char s[103];

    scanf("%s",s);

    int sum=0;

    for(int i=0;i<strlen(s);i++){

        if(s[i]<'a'||s[i]>'z')

            continue;

        else if(s[i]=='d'){

            if(s[i+1]=='z'){

                if(s[i+2]=='='){

                    i+=2;

                }

            }

        }

        else if(s[i]=='l'||s[i]=='n'){

            if(s[i+1]=='j')

                i+=1;

        }

        sum++;

    }

    printf("%d",sum);

    return 0;

}