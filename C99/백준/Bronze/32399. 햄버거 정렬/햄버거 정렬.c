#include <stdio.h>

#include <string.h>

int main() {

    char s[4];

    int n=0;

    scanf("%s",s);

    if(s[0]!='(')

        n++;

    if(s[2]!=')'&&!strstr(s,"1)")){

        n++;

    }

    if(!strcmp(s,")(1")){

        printf("1");

        return 0;

    }

    printf("%d",n);

    return 0;

}