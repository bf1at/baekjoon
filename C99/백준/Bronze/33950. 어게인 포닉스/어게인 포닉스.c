#include <stdio.h>

#include <string.h>

int main() {

    char s[21];

    int n;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%s",s);

        for(int j=0;j<strlen(s);j++){

            if (s[j]=='P'){

                if(s[j+1]=='O'){

                    printf("PHO");

                    j++;

                    continue;

                }

                

            }

            printf("%c",s[j]);

        }

        printf("\n");

    }

    return 0;

}