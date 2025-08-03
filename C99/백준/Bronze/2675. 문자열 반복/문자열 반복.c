#include <stdio.h>

#include <string.h>

int main() {

    int n, a;

    char s[21];

    scanf("%d",&n);

    while(n--){

        scanf("%d",&a);

        scanf("%s",s);

        for(int i=0;i<strlen(s);i++){

            for(int j=0;j<a;j++){

                printf("%c",s[i]);

            }

        }

        printf("\n");

    }

    return 0;

}