#include <stdio.h>

int main() {

    char s[5];

    scanf("%s",s);

    if(s[0]=='I')

        printf("E");

    else

        printf("I");

    if(s[1]=='N')

        printf("S");

    else

        printf("N");

    if(s[2]=='T')

        printf("F");

    else

        printf("T");

    if(s[3]=='P')

        printf("J");

    else

        printf("P");

    return 0;

}